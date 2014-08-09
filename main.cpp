//
//  Created by Jonas Anseeuw
//  Copyright (c) 2014 Jonas Anseeuw. All rights reserved.
//

#include <iostream>
#include <vector>
#include "math.h"

using namespace std;

template<typename T>
class SelectionSort {
public:
	void operator() (std::vector<T> & v) const{
		for(int i=v.size()-1; i>0; i--){
			int imax =i;
			for(int j = 0; j < i; j++){
				if (v[j] > v[imax]) imax = j;
			}
			int h = v[i];
			v[i] = v[imax];
			v[imax] = h;
		}
	}
};

int main(int argc, const char * argv[])
{
	int temp[] = {16,2,77,29, 6, 19, 15, 88};
	vector<int> array (temp, temp + sizeof(temp) / sizeof(int) );
	
	SelectionSort<int> selectionSort;
	selectionSort(array);
	
	cout << "Sorted array is \n";
	for(int i=0; i<array.size(); i++){
		cout<<array[i]<<" ";
	}
	
    return 0;
}

