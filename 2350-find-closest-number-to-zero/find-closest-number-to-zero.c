int findClosestNumber(int arr[], int n) {
    int closest = arr[0]; 
    for(int i=1; i<n; i++){
        if(abs(arr[i]) < abs(closest)){
            closest = arr[i];
        } else if (abs(arr[i]) == abs(closest)){
            if(arr[i] > closest){
                closest = arr[i];
            }
        }
    }
    return closest;
}
