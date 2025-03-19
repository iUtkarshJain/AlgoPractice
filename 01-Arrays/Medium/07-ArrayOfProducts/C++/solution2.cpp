#include <vector>
using namespace std;
// O(n) time | O(n) space
vector<int> arrayOfProducts(vector<int> array) {
    int n = array.size();
    vector<int> leftProducts(n, 1), rightProducts(n, 1), products(n, 1);

    int leftRunningProduct = 1;
    for(int i = 0; i < n; i++){
        leftProducts[i] = leftRunningProduct;
        leftRunningProduct *= array[i];
    }

    int rightRunningProduct = 1;
    for(int i = n - 1; i >= 0; i--){
        rightProducts[i] = rightRunningProduct;
        rightRunningProduct *= array[i];
    }

    for(int i = 0; i < n; i++)
        products[i] = leftProducts[i] * rightProducts[i];
    
    return products;
}