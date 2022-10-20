#include<bits/stdc++.h>
using namespace std;

int binarySearch(int nums[], int n, int target)
{

    int first = 0, last = n - 1;


    while (first <= last)
    {
        int mid = (first + last)/2;
        if (target == nums[mid]) {
            return mid;
        }

        else if (target < nums[mid]) {
            last = mid - 1;
        }
        else {
            first = mid + 1;
        }
    }
    return -1;
}

int main(void)
{
    int nums[] = { 12, 15, 18, 28, 29, 40 };
    int target;
    cout<<"Enter a number that you wanted to search : ";
    cin>>target;

    int n = sizeof(nums)/sizeof(nums[0]);
    int index = binarySearch(nums, n, target);

    if (index != -1) {
        cout<<"Element found at index "<<index;
    }
    else {
        cout<<("Element not found in the array");
    }

    return 0;
}


