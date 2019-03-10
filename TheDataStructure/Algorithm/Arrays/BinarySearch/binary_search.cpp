method1:

int binary_search_iterative(int a[], int key, int len)
{
	int low = 0;
	int high = len - 1;
	while(low <= high)
	{
		int mid = low + (high - low)/2;
		if(key == a[mid])
			return mid;
		if(key < a[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return -1;
}

method2:

int binary_search_rec(int a[], int key, int low, int high)
{
	if(low > high)
		return -1;
	int mid = low + (high - low)/2;
	if(a[mid] == key)
		return mid;
	if(key < a[mid])
		return binary_search_rec(a,key,low,mid-1);
	return binary_search_rec(a,key,mid+1,high);
}
int binary_search_recurssive(int a[], int key, int len)
{
	return binary_search_rec(a,key,0,lenn-1);
}
