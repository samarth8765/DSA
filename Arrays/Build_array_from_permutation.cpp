https://leetcode.com/problems/build-array-from-permutation/

vector<int>buildarray(vector<int>arr) {

    for (int i = 0; i < arr.size(); i++) {
        arr[i] = n * (arr[arr[i]] % n) + arr[i];
    }
    for (auto &i : arr) {
        i = i / n;
    }
    return arr;
}