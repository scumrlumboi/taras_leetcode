#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*int removeDuplicates1(vector<int>& nums) {       // function that required some search activity about vectors functions
 *
 *        sort( nums.begin(), nums.end() );
 *        nums.erase( unique( nums.begin(), nums.end() ), nums.end() );
 *        int s = nums.size();
 *        return s;
 *
 * }*/


int removeDuplicates2(vector<int>& nums) {    // function that didn't require any research activity

    int s = nums.size();
    sort (nums.begin(), nums.end() );
    vector<int> nums_rev;
    for (int i = 0; i < s; i++) {

    }
    return s;

}

int main() {
    vector<int> nums = {1, 5, 5, 6, 2, 1, 6, 8, 2, 5, 7, 3, 6, 2, 6};

    //cout << removeDuplicates1(nums);
    cout << removeDuplicates2(nums);

    return 0;
}
