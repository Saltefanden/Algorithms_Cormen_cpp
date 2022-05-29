void merge(int arr[], int startidx, int mididx, int endidx){

  int arrSize{endidx - startidx};
  int copyArr[arrSize];

  for (int i{}; i<arrSize; ++i){
    copyArr[i] = arr[startidx+i];
  }

  int copyStartidx{startidx - startidx};
  int copyMididx{mididx - startidx};
  int copyEndidx{endidx - startidx};

  int li{copyStartidx};
  int ri{copyMididx};
  int i{startidx};
  while (li < copyMididx && ri < copyEndidx){
      copyArr[li] <= copyArr[ri] ? (arr[i++] = copyArr[li++]) : (arr[i++] = copyArr[ri++]);
  }
  while (li < copyMididx){
    arr[i++] = copyArr[li++];
  }
  while (ri < copyEndidx){
    arr[i++] = copyArr[ri++];
  }
}
