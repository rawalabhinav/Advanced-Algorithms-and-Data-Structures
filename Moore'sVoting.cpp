int voting(auto arr, int n){

	int win = arr[0], count = 1;
	for(int i = 1; i < n; i++){

		if(arr[i] == win) count++;
		else if(--count) continue;

		win = arr[i], count = 1;

	}

	count = 0;
	for(int i = 0; i < n; i++)
		count += (arr[i] == win);

	return count > n/2 ? win:-1;

}