// 0x00153830 - fills chhaa.mdl region with 0x12
int func_00153830(void *mdlHeader, int size)
{
  int i;
  
  if (size < 0) {
    size = 0;
  }
  else {
    for (i = 0; i < size; i = i + 0x10) {
      *((char *)mdlHeader + i) = ((i % 8) * 0x11) + 0x12;
    }
  }
  return size;
}

void func_011fd28(int* arg0, int arg1) {
    arg0[0] = arg1;
    arg0[2] = 0;
    arg0[1] = arg1;
}

