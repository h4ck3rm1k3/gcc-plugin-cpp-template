static int foo = 1234567891;
//                     01234567890
static char data [] = "THISISATEST";
static char data2 [256];

int main () {
  foo++;
  for (int i = 0;
       i < 10;
       i++) {
    data2[i]=data[i];
    data2[i+10]=data[i];
    data2[i+20]=data[i];
  }  
}
