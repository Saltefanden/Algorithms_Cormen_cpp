template <typename T>
void custom_insertion_sort(T* arr, const int size, bool (*const func)(const T&, const T& ) = [](const T& a, const T& b){return a<b;} ){
  int key{0};
  int j;
  for (int i{1}; i<size; ++i){
    key = arr[i];
    j = i-1;
    while(j >= 0 && func(key, arr[j])){
      arr[j+1] = arr[j];
      --j;
    }
    arr[j+1] = key;
  }
}