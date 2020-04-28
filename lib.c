int* Deci_Bin(int n, int *ArrayPass, int D,int B){
  int ris,resto,i;
  ris=n;
  while(ris>0){
  for(i=D-1;i>0;i--){
  ris= ris/B;
  resto=n%B;
  n=ris;
  ArrayPass[i]=resto;
}
}
  return ArrayPass;
}
