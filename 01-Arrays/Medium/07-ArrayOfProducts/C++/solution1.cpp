#include <vector>
using namespace std;
// O(n^2) time | O(n) space
vector<int> arrayOfProducts(vector<int> array) {
    int n = array.size();
    vector<int> products(n, 1);
    for(int i = 0; i < n; i++){
        int runningProduct = 1;
        for(int j = 0; j < n; j++)
            if(i != j)
                runningProduct *= array[j];
        products[i] = runningProduct;
    }
    return products;
}