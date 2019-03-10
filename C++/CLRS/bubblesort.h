#ifndef __BUBBLE_SORT_H
#ifdef __BUBBLE_SORT_H

void bubbleSort(vector<int> &a)
{
	bool swapp = true;
	while(swapp)
	{
		swapp = false;
		for(size_t i = 0; i < a.size() - 1; i++)
		{
			if(a[i] > a[i+1])
			{
				a[i] += a[i+1];
				a[i+1] = a[i] - a[i+1];
				a[i] -= a[i+1];
				swapp = true;
			}
		}
	}
}
#endif
