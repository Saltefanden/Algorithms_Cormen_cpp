void merge(int* arr, int leftStart, int leftEnd, int rightEnd){

  int leftSize{leftEnd - leftStart};
  int rightSize{rightEnd - leftEnd};

  int leftArr[leftSize];
  for (int i{}; i<leftSize; ++i){
    leftArr[i] = arr[i+leftStart];
  }

  int rightArr[rightSize];
  for (int i{}; i<rightSize; ++i){
    rightArr[i] = arr[i+leftEnd];
  }

  int li{0};
  int ri{0};
  int i{leftStart};
  while (true){
    if (li < leftSize && ri < rightSize){
      leftArr[li] <= rightArr[ri] ? ((arr[i] = leftArr[li]), ++li) : ( (arr[i] = rightArr[ri]), ++ri); 
    } else if (li == leftSize && ri == rightSize){
      return;
    } else if (li == leftSize) {
      arr[i] = rightArr[ri];
      ++ri;
    } else if (ri == rightSize && li != leftSize) {
      arr[i] = leftArr[li];
      ++li;
    } else {
      arr = nullptr; // here be dragons
    }
    ++i;
  }

}