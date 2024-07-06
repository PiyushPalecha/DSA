//error occur  code stdio question 
/*
#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> v){
	int s = 0;
	int e = v.size()-1;
	while(s < e){
		swap(v[s++], v[e--]);

	}
	return v;

}
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	int i = n-1;//point last index
	int j = m-1; // point last index of arr2
	int <vector> ans;
	int carry = 0;


	while(i>=0 && j>=0){
		int value1 = a[i];
		int value2 = b[j];
		int sum = value1 + value2 + carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		i--;
		j--;

	}

	//first case
	while(i>=0){
		int sum = a[i] +carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		i--;
	}
	//second case
	while(j>=0){
		int sum =  b[j] + carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		j--;
	}

	//third case 
	while(carry != 0){
		int sum = carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		
	}
	//print answer
}
int main(){
	return reverse(ans);

}
*/
	
//Que ---> ROTATE arr k times
 // INCOMPLETE CODE 
#include<iostream>
#include<vector>
using namespace std;
class Solution{
	public:
    void rotate(vector<int>& arr, int k){
	    vector<int>temp(arr.size());
		for(int i=0; i<arr.size(); i++){
			temp[(i+k) % arr.size()] = arr[i];
		}
		arr = temp;
	}
};
int main(){
	Solution solution;
	vector<int> arr = {1,2,3,4,5};
	int k = 3;
	//print the rotated array
	solution.rotate(arr,k);
	for(int i=0; i<arr.size(); i++){
		cout << arr[i] << " ";
	}
	return 0;
}	



/*
//Complete code -----------------------------------------------------------------------------------------------
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        vector<int> temp(arr.size());

        for (int i = 0; i < arr.size(); i++) {
            temp[(i + k) % arr.size()] = arr[i];
        }

        arr = temp;
    }
};

int main() {
    Solution solution;
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 3;

    solution.rotate(arr, k);

    // Print the rotated array
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
*/