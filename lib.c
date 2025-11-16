// 0x00153830 - fills chhaa.mdl region with 0x12
int func_00153830(void *mdlHeader, int size)
{
  int i;
  
  if (size < 0) {
    size = 0;
  }
  else {
    for (i = 0; i < size; i = i + 0x10) {
      *((char *)mdlHeader + i) = 0x12;
    }
  }
  return size;
}

