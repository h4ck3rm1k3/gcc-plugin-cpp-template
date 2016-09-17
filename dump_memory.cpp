char buffer[] ="this is the start of dump_memory_cpp";

/*
  contains code from the linux kernel.
*/
// try and write the process memory to disk
// takes some code from https://github.com/mjnichol/C-Memory-Scanner

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <setjmp.h>
#include <unistd.h>
#include <err.h>
#include <sys/time.h>
#include <sys/resource.h>
//#include <linux/elfcore.h>
//#include <linux/regset.h>

#include <errno.h>
#include <string.h>
#include <vector>

const long start_of_image = 0x400000;

//#define HZ 250
//#define IS_ENABLED(option)          (__enabled_ ## option || __enabled_ ## option ## _MODULE)

__extension__ typedef unsigned long long __u64;
__extension__ typedef __signed__ long long __s64;
typedef unsigned short __u16;
typedef __signed__ short __s16;
typedef __signed__ int __s32;
typedef unsigned int __u32;


typedef __u64 Elf64_Addr;
typedef __u16 Elf64_Half;
typedef __s16 Elf64_SHalf;
typedef __u64 Elf64_Off;
typedef __s32 Elf64_Sword;
typedef __u32 Elf64_Word;
typedef __u64 Elf64_Xword;
typedef __s64 Elf64_Sxword;
#define GATE_EHDR	((const struct elfhdr *) GATE_ADDR)

/*  /usr/src/linux-headers-4.7.0-1-common/arch/x86/include/asm/elf.h */
/* /usr/src/linux-headers-4.7.0-1-common/include/linux/elf.h */
/* /usr/src/linux-headers-4.7.0-1-common/include/uapi/linux/elf.h */

// //#include <linux/elf.h>
// static sigjmp_buf jumpbuf;

// static struct sigaction sa, oldsa;

// /* stores the type of memory access: -1 = fail, 0 = read, 1 = write */
// static sig_atomic_t cur_a_type;

// static void handler(int signum) {
//   //  printf("segfault\n");  
//   cur_a_type = -1;
//   siglongjmp(jumpbuf, 1);
// }

static  char buffer1[] ="this is the start of file";

// void scan(FILE * f, int start, int size){

//   //(usage.ru_maxrss * 1024 * 10000)
//     int max_address = start + size;
//     //const int start = 0;

//     int step  = 512;
    
//     for (long p = start;
// 	 p < max_address;
// 	 p += step
// 	 ){

//       unsigned long * v = (unsigned long *)p;
//       // //      if (!sigsetjmp(jumpbuf, 1 )){
//       // 	int temp = *v;

//       // 	if (cur_a_type == 0) {
//       // 	  printf ("at %x\n", p);
//       // 	  printf ("\tgot %d\n", temp);
//       // 	  fwrite (v , sizeof(int), step , f);
//       // 	}      
	
//       // 	/* Read was successful! */
//       // 	cur_a_type = 0;			
			
//     }
//   }
// }

#define	ELFOSABI_NONE		0	/* No extensions or unspecified */
#define	ELFOSABI_SYSV		ELFOSABI_NONE
#define	ELFOSABI_HPUX		1	/* Hewlett-Packard HP-UX */
#define	ELFOSABI_NETBSD		2	/* NetBSD */
#define	ELFOSABI_LINUX		3	/* Linux */
#define	ELFOSABI_UNKNOWN4	4
#define	ELFOSABI_UNKNOWN5	5
#define	ELFOSABI_SOLARIS	6	/* Sun Solaris */
#define	ELFOSABI_AIX		7	/* AIX */
#define	ELFOSABI_IRIX		8	/* IRIX */
#define	ELFOSABI_FREEBSD	9	/* FreeBSD */
#define	ELFOSABI_TRU64		10	/* Compaq TRU64 UNIX */
#define	ELFOSABI_MODESTO	11	/* Novell Modesto */
#define	ELFOSABI_OPENBSD	12	/* Open BSD */
#define	ELFOSABI_OPENVMS	13	/* Open VMS */
#define	ELFOSABI_NSK		14	/* Hewlett-Packard Non-Stop Kernel */
#define	ELFOSABI_AROS		15	/* Amiga Research OS */
#define	ELFOSABI_ARM		97	/* ARM */
#define	ELFOSABI_STANDALONE	255	/* standalone (embedded) application */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/mman.h>

//elf_addr_t unsigned long
typedef __u64 Elf64_Addr;
/** Process memory regions */
enum region_type {
  REGION_EXECUTABLE = 0x1,
  REGION_LIBRARY = 0x2,
  REGION_HEAP = 0x4,
  REGION_STACK = 0x8,
  REGION_BSS = 0x10,
  REGION_VDSO = 0x20,
  REGION_VSYSCALL = 0x40,
  REGION_ALL = 0x7F,
};

struct elf_siginfo
{
	int	si_signo;			/* signal number */
	int	si_code;			/* extra code */
	int	si_errno;			/* errno */
};
typedef unsigned long elf_greg_t;

struct user_regs_struct {
  unsigned long   r15;
  unsigned long   r14;
  unsigned long   r13;
  unsigned long   r12;
  unsigned long   bp;
  unsigned long   bx;
  unsigned long   r11;
  unsigned long   r10;
  unsigned long   r9;
  unsigned long   r8;
  unsigned long   ax;
  unsigned long   cx;
  unsigned long   dx;
  unsigned long   si;
  unsigned long   di;
  unsigned long   orig_ax;
  unsigned long   ip;
  unsigned long   cs;
  unsigned long   flags;
  unsigned long   sp;
  unsigned long   ss;
  unsigned long   fs_base;
  unsigned long   gs_base;
  unsigned long   ds;
  unsigned long   es;
  unsigned long   fs;
  unsigned long   gs;
 };

 #define ELF_NGREG (sizeof(struct user_regs_struct) / sizeof(elf_greg_t))
 typedef elf_greg_t elf_gregset_t[ELF_NGREG];

struct elf_prstatus
{
#if 0
	long	pr_flags;	/* XXX Process flags */
	short	pr_why;		/* XXX Reason for process halt */
	short	pr_what;	/* XXX More detailed reason */
#endif
	struct elf_siginfo pr_info;	/* Info associated with signal */
	short	pr_cursig;		/* Current signal */
	unsigned long pr_sigpend;	/* Set of pending signals */
	unsigned long pr_sighold;	/* Set of held signals */
#if 0
	struct sigaltstack pr_altstack;	/* Alternate stack info */
	struct sigaction pr_action;	/* Signal action for current sig */
#endif
	pid_t	pr_pid;
	pid_t	pr_ppid;
	pid_t	pr_pgrp;
	pid_t	pr_sid;
	struct timeval pr_utime;	/* User time */
	struct timeval pr_stime;	/* System time */
	struct timeval pr_cutime;	/* Cumulative user time */
	struct timeval pr_cstime;	/* Cumulative system time */
#if 0
	long	pr_instr;		/* Current instruction */
#endif
  elf_gregset_t pr_reg;	/* GP registers */
#ifdef CONFIG_BINFMT_ELF_FDPIC
	/* When using FDPIC, the loadmap addresses need to be communicated
	 * to GDB in order for GDB to do the necessary relocations.  The
	 * fields (below) used to communicate this information are placed
	 * immediately after ``pr_reg'', so that the loadmap addresses may
	 * be viewed as part of the register set if so desired.
	 */
	unsigned long pr_exec_fdpic_loadmap;
	unsigned long pr_interp_fdpic_loadmap;
#endif
	int pr_fpvalid;		/* True if math co-processor being used.  */
};

/** Region obtained via /proc/<pid>/maps */
struct region {
  /** Region start address */
  void *start;
  /** Region end address */
  void *end;
  /** Region size */
  size_t size;
  /** Access protection */
  int perms;
  /** Region offset */
  Elf64_Addr offset;
  /** Device identifier */
  dev_t dev;
  /** Device inode */
  ino_t inode;
  /** Associated pathname */
  const char *pathname;
  /** Region type */
  enum region_type type;
  /** Regions tree */
  //struct rb_node rb_region;
};

/* const char *arch_vma_name(struct vm_area_struct *vma) */
/* { */
/* 	if (vma->vm_flags & VM_MPX) */
/* 		return "[mpx]"; */
/* 	return NULL; */
/* } */

/* /\* */
/*  * The purpose of always_dump_vma() is to make sure that special kernel mappings */
/*  * that are useful for post-mortem analysis are included in every core dump. */
/*  * In that way we ensure that the core dump is fully interpretable later */
/*  * without matching up the same kernel and hardware config to see what PC values */
/*  * meant. These special mappings include - vDSO, vsyscall, and other */
/*  * architecture specific mappings */
/*  *\/ */
/* static bool always_dump_vma(struct vm_area_struct *vma) */
/* { */
/* 	/\* Any vsyscall mappings? *\/ */
/* 	if (vma == get_gate_vma(vma->vm_mm)) */
/* 		return true; */

/* 	/\* */
/* 	 * Assume that all vmas with a .name op should always be dumped. */
/* 	 * If this changes, a new vm_ops field can easily be added. */
/* 	 *\/ */
/* 	if (vma->vm_ops && vma->vm_ops->name && vma->vm_ops->name(vma)) */
/* 		return true; */

/* 	/\* */
/* 	 * arch_vma_name() returns non-NULL for special architecture mappings, */
/* 	 * such as vDSO sections. */
/* 	 *\/ */
/* 	if (arch_vma_name(vma)) */
/* 		return true; */

/* 	return false; */
/* } */

/* /\* */
/*  * Decide what to dump of a segment, part, all or none. */
/*  *\/ */
/* static unsigned long vma_dump_size(struct vm_area_struct *vma, */
/* 				   unsigned long mm_flags) */
/* { */
/* #define FILTER(type)	(mm_flags & (1UL << MMF_DUMP_##type)) */

/* 	/\* always dump the vdso and vsyscall sections *\/ */
/* 	if (always_dump_vma(vma)) */
/* 		goto whole; */

/* 	if (vma->vm_flags & VM_DONTDUMP) */
/* 		return 0; */

/* 	/\* support for DAX *\/ */
/* 	if (vma_is_dax(vma)) { */
/* 		if ((vma->vm_flags & VM_SHARED) && FILTER(DAX_SHARED)) */
/* 			goto whole; */
/* 		if (!(vma->vm_flags & VM_SHARED) && FILTER(DAX_PRIVATE)) */
/* 			goto whole; */
/* 		return 0; */
/* 	} */

/* 	/\* Hugetlb memory check *\/ */
/* 	if (vma->vm_flags & VM_HUGETLB) { */
/* 		if ((vma->vm_flags & VM_SHARED) && FILTER(HUGETLB_SHARED)) */
/* 			goto whole; */
/* 		if (!(vma->vm_flags & VM_SHARED) && FILTER(HUGETLB_PRIVATE)) */
/* 			goto whole; */
/* 		return 0; */
/* 	} */

/* 	/\* Do not dump I/O mapped devices or special mappings *\/ */
/* 	if (vma->vm_flags & VM_IO) */
/* 		return 0; */

/* 	/\* By default, dump shared memory if mapped from an anonymous file. *\/ */
/* 	if (vma->vm_flags & VM_SHARED) { */
/* 		if (file_inode(vma->vm_file)->i_nlink == 0 ? */
/* 		    FILTER(ANON_SHARED) : FILTER(MAPPED_SHARED)) */
/* 			goto whole; */
/* 		return 0; */
/* 	} */

/* 	/\* Dump segments that have been written to.  *\/ */
/* 	if (vma->anon_vma && FILTER(ANON_PRIVATE)) */
/* 		goto whole; */
/* 	if (vma->vm_file == NULL) */
/* 		return 0; */

/* 	if (FILTER(MAPPED_PRIVATE)) */
/* 		goto whole; */

/* 	/\* */
/* 	 * If this looks like the beginning of a DSO or executable mapping, */
/* 	 * check for an ELF header.  If we find one, dump the first page to */
/* 	 * aid in determining what was mapped here. */
/* 	 *\/ */
/* 	if (FILTER(ELF_HEADERS) && */
/* 	    vma->vm_pgoff == 0 && (vma->vm_flags & VM_READ)) { */
/* 		u32 __user *header = (u32 __user *) vma->vm_start; */
/* 		u32 word; */
/* 		mm_segment_t fs = get_fs(); */
/* 		/\* */
/* 		 * Doing it this way gets the constant folded by GCC. */
/* 		 *\/ */
/* 		union { */
/* 			u32 cmp; */
/* 			char elfmag[SELFMAG]; */
/* 		} magic; */
/* 		BUILD_BUG_ON(SELFMAG != sizeof word); */
/* 		magic.elfmag[EI_MAG0] = ELFMAG0; */
/* 		magic.elfmag[EI_MAG1] = ELFMAG1; */
/* 		magic.elfmag[EI_MAG2] = ELFMAG2; */
/* 		magic.elfmag[EI_MAG3] = ELFMAG3; */
/* 		/\* */
/* 		 * Switch to the user "segment" for get_user(), */
/* 		 * then put back what elf_core_dump() had in place. */
/* 		 *\/ */
/* 		set_fs(USER_DS); */
/* 		if (unlikely(get_user(word, header))) */
/* 			word = 0; */
/* 		set_fs(fs); */
/* 		if (word == magic.cmp) */
/* 			return PAGE_SIZE; */
/* 	} */

/* #undef	FILTER */

/* 	return 0; */

/* whole: */
/* 	return vma->vm_end - vma->vm_start; */
/* } */

int default_dump() {
  struct rusage usage;   
  int x =  getrusage(RUSAGE_SELF, &usage);
  printf("rss %d\n",usage.ru_maxrss);        /* maximum resident set size */


  //long max_address = start + (usage.ru_maxrss * 1024 * 10000);

}

int dump_memory(long from, long to, int count, const char * pfilename){
  // sa.sa_handler = handler;
  // sigemptyset(&sa.sa_mask); 
  // sa.sa_flags = 0;
  // if( sigaction(SIGSEGV, NULL, &oldsa) == -1) 
  //   err(1, "Cannot save old sigaction");
  // if( sigaction(SIGSEGV, &sa, NULL) == -1) 
  //   err(1, "Cannot do the new sigaction");
  int page_size = getpagesize(); /* Get the page size on our machine */
  long step  = 512;


  /// write to a file ------------------------- 
  char filename[255];
  sprintf(filename,"test_program_segment_%d_%s.out",count,pfilename);
  FILE * f2 = fopen(filename,"wb");
  void * psegment = (void*)(from);
  long size = to - from;
  fwrite (psegment , sizeof(void*), size  , f2);
  fclose(f2);
  /// end of write to a file ------------------------- 
  return 0;
  /* int bcount = 0;   */
  /* printf ("scanning from %x to %x\n", from, to); */
  /* for (long p = from; */
  /*      p < to; */
  /*      p += step */
  /*      ){ */
    
  /*   printf ("scanning %x step :%d\n", p, count++); */
  /*   unsigned long * v = (unsigned long *)p; */
  /*   if (!sigsetjmp(jumpbuf, 1 )){ */
  /*     int temp = *v; */
      
  /*     if (cur_a_type == 0) { */
  /* 	printf ("at %x\t", p); */
  /* 	printf ("got %d\n", temp); */
  /*     } */
  /*     else */
  /* 	{ */
  /* 	  printf ("failed %x\n", p); */
  /* 	} */
      
  /*     /\* Read was successful! *\/ */
  /*     cur_a_type = 0;			 */
      
  /*   } */
  /* } */
  /* return 0; */
}

class Maps {
  
 public:
 Maps(): total_size(0)
    {
      read_maps();
    }
  
  //typedef std::vector<region> t_region_vector;
  //  t_region_vector regions;
  long total_size;
  int maps_read(int fd) {
  
    if (lseek(fd, 0, SEEK_SET) < 0)
      return -EIO;
    const int MAX_BUF_SIZE = 255;
    char buf[MAX_BUF_SIZE];
    char *from = buf, *to = buf, *next = buf;
    char *bufend = buf + MAX_BUF_SIZE - 1;
    //long total_size=0;
    int count =0;
    do {
      from = next; /* advance to the start of the next line */
      next = (char *)memchr(from, '\n', to - from); /* check if we have another line */

      if (!next) {
	/* shift/fill the buffer */
	size_t len = to - from;
	/* move the current text to the start of the buffer */
	memmove(buf, from, len);
	from = buf;
	to = buf + len;
	/* fill up buffer with text */
	size_t nread;
	while (to < bufend) {
	  nread = read(fd, to, bufend - to);
	  if (nread > 0)
	    to += nread;
	  else
	    break;
	}
	if (to != bufend && !nread)
	  memset(to, 0, bufend - to); /* zero-out remaining space */
	*to = '\n'; /* sentinel */
	next = (char *)memchr(from, '\n', to + 1 - from);
      }
      *next = 0; /* turn newline into 0 */
      next += next < to ? 1 : 0; /* skip NULL if not end of text */

      printf("\n------------------------------------------------\nline:'%s'\n",from);
      printf("\n------------------------------------------------\n");
	       
      unsigned long start, end;
      char flags[4], *pathname;
      unsigned long offset;
      int major, minor;
      long inode;

      int nameoff;
      char filename[255];
      memset(filename, 0, sizeof(filename)); /* zero-out remaining space */
      // Parse each line of /proc/<pid>/maps file.
      if (sscanf(from, "%llx-%llx %4s %llx %x:%x %llx %n %s",
		 &start, &end, flags,
		 &offset, &major, &minor, &inode, &nameoff, filename) > 6) {

	printf("\trange:%llx-%llx\n",      start, end);
	long size = end - start;

  
	// the shoff in the dump is : 684664
  
	total_size += size;
	printf("\tcount:%lld\n", count++);
	printf("\tsize:%llx %lld\n", size, size);
	printf("\ttotal size:%llx %lld\n",total_size,total_size);	
	printf("\tcalculated end position:%llx %lld\n",start_of_image + total_size,start_of_image + total_size);
	printf("\tflags:%4s\n",flags);
	printf("\toff:%llx\n",   offset);
	printf("\tmaj/min:%x/%x\n",      major, minor);
	printf("\tinote:%llx\n",	       inode);
	//printf("\tnameoff:%ld\n",	       nameoff);	
	printf("\tfilename:%s\n",filename);
	
	struct region reg;
	// Setup protection permissions
	int perms = PROT_NONE;
	printf("flags %c %c %c %c\n",
	       flags[0],
	       flags[1],
	       flags[2],
	       flags[3]);
	if (flags[0] == 'r'){
	  perms |= PROT_READ;
	  printf("readable\n");
	}
	if (flags[1] == 'w'){
	  perms |= PROT_WRITE;
	  printf("writable\n");
	  }
	if (flags[2] == 'x'){
	  perms |= PROT_EXEC;
	  printf("executable\n");
	}
	
	if (flags[3] == 'p') {
	  perms |= MAP_PRIVATE;
	  printf("private\n");
	}
	else if (flags[3] == 's')
	  {
	    perms |= MAP_SHARED;
	    printf("shared\n");
	  }
	reg.perms = perms;
	
	  
	// Must have permissions to read and execute, and be non-zero size.
	if ((flags[0] == 'r') && (flags[2] == 'x') && ((end - start) > 0)) {
	  /* allocate a new region structure */
	  //struct region *reg = (struct region *)mmalloc(sizeof(struct region));
	
	  //assert(reg != NULL);
	  
        // Create new region
	  reg.start = (void *)start;
	  reg.end = (void *)end;
	  reg.size = (size_t)(end - start);
	  
	  
	  // Set region offset
	  reg.offset = (Elf64_Addr)offset;
	  
	  // Device and number
	  reg.dev = minor | (major << 8);
	  reg.inode = inode;
	  const char * vsyscall =0;
	  // Save pathname
	  if (nameoff == 0 || (size_t) nameoff > strlen(from)) {
	    nameoff = strlen(from);
	  }
	  
	  pathname = from + nameoff;
	  
	  if (strncmp(pathname, "[vdso]", 6) == 0) {
	    // /proc/self/maps has a misleading file offset
	    offset = 0;
	    reg.type = REGION_VDSO;
	  } else if (strncmp(pathname, "[vsyscall]", 10) == 0) {
	    vsyscall = (char *)start;
	    reg.type = REGION_VSYSCALL;
	  } else if (pathname[0] == '\0') {
	    reg.type = REGION_BSS;
	  } else {
	    reg.type = REGION_LIBRARY;
	    //char exename[128];
	    //, linkbuf[MAX_LINKBUF_SIZE];
	    //size_t linkbuf_size;
	    
	    //snprintf(exename, sizeof(exename), "/proc/self/exe");
	    //if ((linkbuf_size = readlink(exename, linkbuf, MAX_LINKBUF_SIZE)) > 0)
	    //  linkbuf[linkbuf_size] = 0;
	    //else
	    //  linkbuf[0] = 0;
	    
	    //if (strncmp(pathname, linkbuf, MAX_LINKBUF_SIZE) == 0)
	    //  reg->type = REGION_EXECUTABLE;
	    //else
	    //  reg->type = REGION_LIBRARY;
	  }
	  //reg->pathname = strdup(pathname); /* TODO: avoid strdup (becasue of malloc) */


	  //
	  /* struct library *lib = library_find(maps->library_hash, pathname); */
	  /* if (!lib) { */
	  /*   lib = mmalloc(sizeof(*lib)); */
	  /*   library_init(lib, pathname, maps); */
	  /*   library_add(maps->library_hash, lib); */
	  /*   DPRINT(DEBUG_ALL, "library %s\n", lib->pathname); */
	  /* } */
	  
	  /* rb_insert_region(lib, offset, perms, &reg->rb_region); */
	  /* if (reg->type & REGION_VDSO) */
	  /*   lib->vdso = true; */

	  // process the region
	  //regions.push_back(reg);
	  //for (int i = 0, vma = map.first(); vma != NULL; 
	  //vma = map.next()) { 
	/* 	unsigned long dump_size; */
	/* 	dump_size = vma_dump_size(vma, cprm->mm_flags); */
	/* 	vma_filesz[i++] = dump_size; */
	/* 	vma_data_size += dump_size; */
	} 


	  if (strcmp(filename, "[vvar]")==0) {
	    printf("skipping vvar\n");
	  }
	  else if ((perms &  PROT_READ)){

	    if (filename[0] == '[') {
	      printf("going to dump %s\n",filename);
	      dump_memory(start, end, count, filename );
	    } else {
	      printf("skipping %s\n",filename);
	    }
	  }		  
	  else {
	    printf("Skipping unreadable %s\n",filename);
	    
	  }
	    
	//} //
	
      } // if scan
      printf("while from:%x %x>%x \n", from, to, buf);
    } while (to > buf);
    
    return 0;
  }
  
  int read_maps (){
    
    // from https://github.com/giuse88/mvh/blob/development/toys/read_maps.c
    //struct maps maps;
    int self_maps = open("/proc/self/maps", O_RDONLY, 0);
    
    //if (self_maps < 0) 
    //die("Cannot access \"/proc/self/maps\"");
    
    maps_read(self_maps);
  
  }
};

int get_current_mm_map_count(){
  // read from proc ... tidi
  return 0;
}


Elf64_Half elf_core_extra_phdrs(void)
{
  //return GATE_EHDR->e_phnum;
  //e->e_phnum
}


struct memelfnote
 {
         const char *name;
         int type;
         unsigned int datasz;
         void *data;
};

struct elf_thread_core_info {
	struct elf_thread_core_info *next;
	struct task_struct *task;
	struct elf_prstatus prstatus;
	struct memelfnote notes[0];
};

#ifndef user_long_t
 #define user_long_t long
 #endif
 #ifndef user_siginfo_t
 #define user_siginfo_t siginfo_t
 #endif

struct elf_note_info {
	struct elf_thread_core_info *thread;
	struct memelfnote psinfo;
	struct memelfnote signote;
	struct memelfnote auxv;
	struct memelfnote files;
	user_siginfo_t csigdata;
	size_t size;
	int thread_notes;
};
const int EI_NIDENT =       16;
typedef struct elf64_hdr {
   unsigned char e_ident[EI_NIDENT];     /* ELF "magic number" */
   Elf64_Half e_type;
   Elf64_Half e_machine;
   Elf64_Word e_version;
   Elf64_Addr e_entry;           /* Entry point virtual address */
   Elf64_Off e_phoff;            /* Program header table file offset */
   Elf64_Off e_shoff;            /* Section header table file offset */
   Elf64_Word e_flags;
   Elf64_Half e_ehsize;
   Elf64_Half e_phentsize;
   Elf64_Half e_phnum;
   Elf64_Half e_shentsize;
   Elf64_Half e_shnum;
   Elf64_Half e_shstrndx;
 } Elf64_Ehdr;


typedef struct elf64_phdr {
  Elf64_Word p_type;
  Elf64_Word p_flags;
  Elf64_Off p_offset;
  Elf64_Addr p_vaddr;
  Elf64_Addr p_paddr;
  Elf64_Xword p_filesz;
  Elf64_Xword p_memsz;
  Elf64_Xword p_align;
} Elf64_Phdr;

const int ELF_EXEC_PAGESIZE = 4096;
int roundup(int x, int y)                                  
  {                                                       
          const typeof(y) __y = y;                        
          return (((x) + (__y - 1)) / __y) * __y;                
  }                                                       

enum segment_types {
  PT_NULL    =0,
  PT_LOAD    =1,
  PT_DYNAMIC =2,
  PT_INTERP  =3,
  PT_NOTE    =4,
  PT_SHLIB   =5,
  PT_PHDR    =6,
  PT_TLS     =7,               /* Thread local storage segment */
  PT_LOOS    =0x60000000,      /* OS-specific */
  PT_HIOS    =0x6fffffff,      /* OS-specific */
  PT_LOPROC  =0x70000000,
  PT_HIPROC  =0x7fffffff,
  PT_GNU_EH_FRAME=         0x6474e550
};

/* unsigned long vsyscall_ehdr; */
/* unsigned long vsyscall_end; */
/* void scan_elf_aux( char **envp) */
/* { */
/* 	long page_size = 0; */
/* 	elf_auxv_t * auxv; */

/* 	while ( *envp++ != NULL) ; */

/* 	for ( auxv = (elf_auxv_t *)envp; auxv->a_type != AT_NULL; auxv++) { */
/* 		switch ( auxv->a_type ) { */
/* 			case AT_SYSINFO: */
/* 				__kernel_vsyscall = auxv->a_un.a_val; */
/* 				/\* See if the page is under TASK_SIZE *\/ */
/* 				if (__kernel_vsyscall < (unsigned long) envp) */
/* 					__kernel_vsyscall = 0; */
/* 				break; */
/* 			case AT_SYSINFO_EHDR: */
/* 				vsyscall_ehdr = auxv->a_un.a_val; */
/* 				/\* See if the page is under TASK_SIZE *\/ */
/* 				if (vsyscall_ehdr < (unsigned long) envp) */
/* 					vsyscall_ehdr = 0; */
/* 				break; */
/* 			case AT_HWCAP: */
/* 				elf_aux_hwcap = auxv->a_un.a_val; */
/* 				break; */
/* 			case AT_PLATFORM: */
/*                                 /\* elf.h removed the pointer elements from */
/*                                  * a_un, so we have to use a_val, which is */
/*                                  * all that's left. */
/*                                  *\/ */
/* 				elf_aux_platform = */
/* 					(char *) (long) auxv->a_un.a_val; */
/* 				break; */
/* 			case AT_PAGESZ: */
/* 				page_size = auxv->a_un.a_val; */
/* 				break; */
/* 		} */
/* 	} */
/* 	if ( ! __kernel_vsyscall || ! vsyscall_ehdr || */
/* 	     ! elf_aux_hwcap || ! elf_aux_platform || */
/* 	     ! page_size || (vsyscall_ehdr % page_size) ) { */
/* 		__kernel_vsyscall = 0; */
/* 		vsyscall_ehdr = 0; */
/* 		elf_aux_hwcap = 0; */
/* 		elf_aux_platform = "i586"; */
/* 	} */
/* 	else { */
/* 		vsyscall_end = vsyscall_ehdr + page_size; */
/* 	} */
/* } */


#define elf_phdr        elf32_phdr
size_t elf_core_extra_data_size(void)
{
  /* if ( vsyscall_ehdr ) { */
  /*   const Elf64_Ehdr *const ehdrp = */
  /*     ( Elf64_Ehdr *)vsyscall_ehdr; */
  /*   const struct elf64_phdr *const phdrp = */
  /*     (const struct elf64_phdr *) (vsyscall_ehdr + ehdrp->e_phoff); */
  /*   int i; */
    
  /*   for (i = 0; i < ehdrp->e_phnum; ++i) */
  /*     if (phdrp[i].p_type == PT_LOAD) */
  /* 	return (size_t) phdrp[i].p_filesz; */
  /* } */
  return 0;
}

long recalc_shoff(Elf64_Ehdr * elf) {
  /* Write notes phdr entry */
  long offset = 0;
  offset += sizeof(*elf);				/* Elf header */
  int segs;

  
  segs = get_current_mm_map_count();
  
  segs +=   elf->e_phnum;
  struct elf_note_info info = { };
	
  offset += segs * sizeof(Elf64_Phdr);	/* Program headers */


  {
    size_t sz = info.size;
    
    //sz += elf_coredump_extra_notes_size(); 0 
    
    //phdr4note = kmalloc(sizeof(*phdr4note), GFP_KERNEL);
    //if (!phdr4note)
    //agoto end_coredump;

    
    //fill_elf_note_phdr(phdr4note, sz, offset);
    offset += sz;
  }
  loff_t dataoff  = offset = roundup(offset, ELF_EXEC_PAGESIZE);

  //elf_addr_t *vma_filesz =  kmalloc_array(segs - 1, sizeof(*vma_filesz), GFP_KERNEL);
  //	if (!vma_filesz)
  //		goto end_coredump;
  size_t vma_data_size = 0;

  //Section Header Table File Offset: 684664 (0x00000000000a7278)
  
  Maps map;
  // call the vma lis

  offset += map.total_size;
  offset += elf_core_extra_data_size();
  
  //elf->e_shoff = offset;
	
	// the final offset
	return offset;
	
}

enum elf_class {
  ELFCLASSNONE =    0,               /* EI_CLASS */
  ELFCLASS32     = 1,
  ELFCLASS64      =2,
  ELFCLASSNUM     =3
};

enum elf_data {
  ELFDATANONE=     0,               /* e_ident[EI_DATA] */
  ELFDATA2LSB     =1,
  ELFDATA2MSB     =2
};

typedef struct elf64_shdr {
  Elf64_Word sh_name;
  Elf64_Word sh_type;
  Elf64_Xword sh_flags;
  Elf64_Addr sh_addr;
  Elf64_Off sh_offset;
  Elf64_Xword sh_size;
  Elf64_Word sh_link;
  Elf64_Word sh_info;
  Elf64_Xword sh_addralign;
  Elf64_Xword sh_entsize;
} Elf64_Shdr;

void elf(Elf64_Ehdr * e){
  const int  _ELFMAG0 =	0x7f;

  /* ELF Header: */
/*   Magic:   7f 45 4c 46 02 01 01 00 00 00 00 00 00 00 00 00  */

  printf("header first %x\n",e->e_ident[0]);
  printf("header %c%c%c\n",e->e_ident[1],e->e_ident[2],e->e_ident[3]);

  /*   Class:                             ELF64 */

  printf("header class %d\n",e->e_ident[4]);
  switch(e->e_ident[4]) {
  case 	ELFCLASSNONE : //	0		/* EI_CLASS */
      printf("header class none\n");
    break;
  case 	ELFCLASS32	:
    printf("header class 32\n");
    break;
  case 	ELFCLASS64	:
    printf("header class 64\n");
    break;
  }
    //#define	ELFCLASSNUM	3
/*   Data:                              2's complement, little endian */
    printf("header data %d\n",e->e_ident[5]);
    switch(e->e_ident[5]) {
    case 	ELFDATANONE : 
      printf("data none\n");
      break;
    case 	ELFDATA2LSB:
    printf("data lsb\n");
    break;
    case 	ELFDATA2MSB:
    printf("data msb\n");
    break;
  }


    /*   Version:                           1 (current) */
    printf("header version %d\n",e->e_ident[6]);



    printf("header abi %d\n",e->e_ident[7]);
    switch(e->e_ident[7]) {
      /* case ELFOSABI_NONE: // ELFOSABI_NONE */
      /*   printf("Same as ELFOSABI_SYSV\n"); */
      /*   break; */
    case ELFOSABI_SYSV:        //
      printf("UNIX System V ABI\n");
      break;
    case ELFOSABI_HPUX:        //HP-UX ABI
      break;
    case ELFOSABI_NETBSD:      //NetBSD ABI
      break;
    case ELFOSABI_LINUX:       //Linux ABI
      printf("LINUX ABI\n");
      break;
    case ELFOSABI_SOLARIS:     //Solaris ABI
      break;
    case ELFOSABI_IRIX  :      //IRIX ABI
      break;
    case ELFOSABI_FREEBSD:     //FreeBSD ABI
      break;
    case ELFOSABI_TRU64 :      //TRU64 UNIX ABI
      break;
    case ELFOSABI_ARM  :       //ARM architecture ABI
      break;
    case ELFOSABI_STANDALONE:   //Stand-alone (embedded) ABI
      printf("standalone ABI\n");
      break;
  }
/*   OS/ABI:                            UNIX - System V */
/*   ABI Version:                       0 */
    printf("header abiv %d\n",e->e_ident[8]);     
/*   Version:                           0x1 */
      
  printf("type %d\n",e->e_type);
  /*   Type:                              EXEC (Executable file) */
  // 1, 2, 3, 4 specify whether the object is relocatable, executable, shared, or core, respectively.
  
  printf("machine %x\n",e->e_machine);
  /*   Machine:                           Advanced Micro Devices X86-64 */

  
  printf("entry %x\n",e->e_entry);
  /*     virtual address :  system first transfers control. starting the process.  */
  /*   Entry point address:               0x4006f0 */
  
  printf("phoff %x\n",e->e_phoff);
  /*     program header table's file offset in bytes or zero.  */
  /*   Start of program headers:          64 (bytes into file) */


  printf("shoff %8.8lx Section header table file offset\n",e->e_shoff);
  /*     This member holds the section header table's file offset in bytes. If the file has no section header table, this member holds zero.  */
  /*   Start of section headers:          13328 (bytes into file) */
  // Points to the start of the section header table.
  
  printf("flags %x\n",e->e_flags);
/*     This member holds processor-specific flags associated with the file. Flag names take the form EF_machine_flag.  */
/*   Flags:                             0x0 */
//  Interpretation of this field depends on the target architecture.
  
  printf("elf header size : ehsize 0x%x\n",e->e_ehsize);
  /*     This member holds the ELF header's size in bytes.  */
  /*   Size of this header:               64 (bytes)  (0x40)*/
  //  Points to the start of the program header table. It usually follows the file header immediately, making the offset 0x34 or 0x40 for 32- and 64-bit ELF executables, respectively
  // Contains the size of this header, normally 64 bytes for 64-bit and 52 for 32-bit format.
										
  printf("phentsize %x\n",e->e_phentsize);
  /*     This member holds the size in bytes of one entry in the file's program header table; all entries are the same size.  */
  /*   Size of program headers:           56 (bytes) */
  //  Contains the size of a program header table entry.
    
  printf("phnum %x\n",e->e_phnum);
  /*     This member holds the number of entries in the program header table. Thus the product of e_phentsize and e_phnum gives the table's size in bytes. If a file has no program header table, e_phnum holds the value zero.  */
  /*   Number of program headers:         9 */
  // Contains the number of entries in the program header table.

    
  printf("shentsize %x\n",e->e_shentsize);
  /*     This member holds a section header's size in bytes. A section header is one entry in the section header table; all entries are the same size.  */
  /*   Size of section headers:           64 (bytes) */
  // Contains the size of a section header table entry.
  
  printf("shnum %x\n",e->e_shnum);
  /*     This member holds the number of entries in the section header table. Thus the product of e_shentsize and e_shnum gives the section header table's size in bytes. If a file has no section header table, e_shnum holds the value zero.  */
  /*   Number of section headers:         35 */
  // Contains the number of entries in the section header table.
    
  printf("shstrndx %d\n",e->e_shstrndx);
  /*     This member holds the section header table index of the entry associated with the section name string table. If the file has no section name string table, this member holds the value SHN_UNDEF. See ``Sections'' and ``String Table'' below for more information.  */
  /*   Section header string table index: 32 */
  // Contains index of the section header table entry that contains the section names.

  unsigned long * pstart = (unsigned long *)e;
  printf("starting ELF    : %x\n",pstart);

  //  void * pstart2 = pstart + e->e_ehsize;

  long shoff = recalc_shoff(e); // patch up the shoff, like the kernel does on coredump
  
  unsigned long * pstart_sh = pstart + shoff;
  printf("new shoff  : 0x%x %d\n",shoff, shoff);
  printf("starting shoff  : 0x%x\n",pstart_sh);

  /* Elf64_Shdr * pelf64_shdr =  (Elf64_Shdr *)pstart_sh; */
  /* for (int i = 0; i < e->e_shnum; i++) { */
    
  /*   printf("offset           : 0x%x\n",pelf64_shdr[i].sh_offset); */
  /*   //printf("pos           : 0x%d\n",pstart_sh); */
    
  /*   //pstart_sh += e->e_shentsize; // 	Contains the size of a section header table entry. */
  /*     //printf("name %x\n",pelf64_shdr->sh_name); */
  /*     //printf("type %x\n",pelf64_shdr->sh_type); */
  /*   //printf("addr %x\n",pelf64_shdr->sh_addr); */

      
  /*     /\* Elf64_Word sh_type; *\/ */
  /*     /\* Elf64_Xword sh_flags; *\/ */
  /*     /\* Elf64_Addr sh_addr; *\/ */
  /*     /\* Elf64_Off sh_offset; *\/ */
  /*     /\* Elf64_Xword sh_size; *\/ */
  /*     /\* Elf64_Word sh_link; *\/ */
  /*     /\* Elf64_Word sh_info; *\/ */
  /*     /\* Elf64_Xword sh_addralign; *\/ */
  /*     /\* Elf64_Xword sh_entsize; *\/ */

    
  /*   //e_shnum 	Contains the number of entries in the section header table. */
  /* } */

  
  for (int i = 0; i < e->e_phnum; i++) {

    
    char filename[255];
    sprintf(filename,"test_program_header_%d.out",i);


    FILE * f2 = fopen(filename,"wb");
	
    void * x = (pstart + e->e_ehsize) + (i * sizeof(Elf64_Phdr));
    //&phdr, sizeof(phdr));
    printf("\n---------------------------\n\tprogram header %d\t%x\n",i,x);
    printf("opened filename %s\n",filename);

    // if (!sigsetjmp(jumpbuf, 1 )){
      
       Elf64_Phdr * phdr = (Elf64_Phdr *)x;
    //   	if (cur_a_type != 0) {
    // 	  printf("Segfault\n");
    // 	  break;
    // 	}
	  
      printf("\ttype %x\n",phdr->p_type);
      
#define CHK(X) X : printf("\t\ttype " # X "\n" ); break;
      switch(  phdr->p_type) {
	
      case CHK( PT_NULL )
      case CHK( PT_LOAD   )
      case CHK( PT_DYNAMIC )
      case CHK( PT_INTERP  )
      case CHK( PT_NOTE    )
      case CHK( PT_SHLIB   )
      case CHK( PT_PHDR    )
      case CHK( PT_TLS     )             /* Thread local storage segment */
      case CHK( PT_LOOS    )
      case CHK( PT_HIOS    )
      case CHK( PT_LOPROC  )
      case CHK( PT_HIPROC  )
      case CHK( PT_GNU_EH_FRAME)
	//      case CHK( PT_GNU_STACK	)
	};
      
      printf("\toffset 0x%x\n",phdr->p_offset);
      //     Offset of the header in the file image.
      
      printf("\tvaddr 0x%x\n",phdr->p_vaddr);
      //Virtual address of the segment in memory.
	
      printf("\tpaddr 0x%x\n",phdr->p_paddr);
      // On systems where physical address is relevant, reserved for segment's physical address.

      printf("\tfilesz 0x%x\n",phdr->p_filesz);
      printf("\tfilesz dec:%d\n",phdr->p_filesz);
      //size in bytes of the segment in the file image. May be 0.
	
      printf("\tmemsz 0x%x\n",phdr->p_memsz);
      //Size in bytes of the segment in memory. May be 0.

      printf("\tflags 0x%x\n",phdr->p_flags);
      //p_flags 	Segment-dependent flags.

      //0 and 1 specify no alignment. Otherwise should be a positive, integral power of 2, with p_vaddr equating p_offset modulus p_align.
      printf("\talign 0x%x\n",phdr->p_align);

      // where does the segment start
      void * psegment = (void*)(phdr->p_vaddr);

      if (psegment) {
	printf("\tgoing to write 0x%x with size 0x%x to file\n",psegment,phdr->p_memsz);      
	fwrite (psegment , sizeof(void*),  phdr->p_memsz , f2);
      }
      else {
	printf("\tNULL Block\n");
      }
	  
      fclose(f2);
	
    }
  //}// exception handling
  
  /*   Elfswitch (phdr->ptype) { */
  /*   case PT_LOAD: */
  /*     //if (!phdr.p_memsz) */
  /*     //break; */
      
  /*     //FSFILE_Read(hFile, &bytesRead, phdr.p_offset, (void *)phdr.p_vaddr, phdr.p_filesz); */
  /*     //excess = phdr.p_memsz - bytesRead; */

  /*   case PT_GNU_STACK: */
  /*     if (phdr.p_flags & PF_X) */

    
}

void regs()
{
  char buffer[] ="this is the start of regs";
  register void *ebp __asm__ ("ebp");
  register void *ebx __asm__ ("ebx");
  register void *esp __asm__ ("esp");
  //  register void *rip __asm__ ("ip"); // rip, eip

  void * ebp1 = ebp;
  
  printf("registers\n");
  printf("ebp: 0x%x\n", ebp);
  printf("ebx: 0x%x\n", ebx);
  //  printf("rip: 0x%x\n", rip);

  register void *rax __asm__ ("rax");
  printf("rax: 0x%x\n", rax);
/*   rax  */
/* rbx    */
/* rcx    */
/* rdx    */
/* rsi    */
/* rdi    */
/* rbp    */
/* rsp    */
/* r8     */
/* r9     */
/* r10    */
/* r11    */
/* r12    */
/* r13    */
/* r14    */
/* r15    */
/* rip    */
/* eflags */
/* cs */
/* ss */
/* ds */
/* es */
/* fs */
/* gs */

  printf("ebp1: 0x%x\n", ebp1);
  printf("esp: 0x%x\n", esp);
  printf("start of refs buff 0x%x\n",buffer);

  /* int size = 10; */
  /* // from https://github.com/ccppjava/random-codes/blob/d71d43c75f3963d6d1fe2c76cb4a8d6f302548a8/c/fn_stack/stack_dump.c */
  /* for (int depth = 0; */
  /*      (depth < size) && (0 != ebp1) && (0 != *(unsigned long *)ebp1)  */
  /* 	 && (ebp1 != (void*)*(unsigned long *)ebp1); ++depth) */
  /*   { */
  /*     printf("stackpos 0x%x\n",(void *)((unsigned long *)(ebp1 + sizeof(unsigned long)))); */
  /*     //printf("stack value :%x\n",(void *)(*(unsigned long *)(ebp1 + sizeof(unsigned long)))); */
  /*     ebp1 = (void*)*(unsigned long *)ebp1; */
  /*   } */
  
}


int dump_memory_main(){
  char buffer[] ="this is the start of dump_memory_main";

  //  dump_memory();
  
  // sa.sa_handler = handler;
  // sigemptyset(&sa.sa_mask); 
  // sa.sa_flags = 0;
  // if( sigaction(SIGSEGV, NULL, &oldsa) == -1) 
  //   err(1, "Cannot save old sigaction");
  // if( sigaction(SIGSEGV, &sa, NULL) == -1) 
  //   err(1, "Cannot do the new sigaction");
	
  int page_size = getpagesize(); /* Get the page size on our machine */
  printf("page size: %d\n", page_size);
  struct rusage usage;   
  int x =  getrusage(RUSAGE_SELF, &usage);
  printf("rss %d\n",usage.ru_maxrss);        /* maximum resident set size */

  printf("start of static 0x%x\n",buffer1);
  printf("start of main buff 0x%x\n",buffer);

  register void *ebp __asm__ ("ebp");
  register void *esp __asm__ ("esp");
  printf("main ebp: 0x%x\n", ebp);
  printf("main esp: 0x%x\n", esp);

  
  FILE * f = fopen("test.out","wb");

  //    const int start = 0x00001;
  
  Elf64_Ehdr * elf_header=(Elf64_Ehdr *)start_of_image;
  regs();
  elf(elf_header);
  
  fclose(f);
  
  char buffere[] ="this is the end of dump_memory_main";
  return 0;
}



char bufferend[] ="this is the end of dump_memory_cpp";
