#include <vector>
using namespace std;
// O(n) time | O(n) space
vector<int> arrayOfProducts(vector<int> array) {
    int n = array.size();
    vector<int> products(n, 1);
    
    int leftRunningProduct = 1;
    for(int i = 0; i < n; i++){
        products[i] = leftRunningProduct;
        leftRunningProduct *= array[i];
    }

    int rightRunningProduct = 1;
    for(int i = n - 1; i >= 0; i--){
        products[i] *= rightRunningProduct;
        rightRunningProduct *= array[i];
    }

    return products;
}