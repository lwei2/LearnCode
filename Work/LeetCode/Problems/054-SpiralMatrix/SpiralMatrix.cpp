class Solution
{
	public:
		vector<int> spiralOrder(vector<vector<int> >& matrix)
		{
			vector<int> result;
			int rowSize = matrix.size();
			if(rowSize == 0)
				return result;
			int colSize = matrix[0].size();
			int lb = 0, ub = 0;
			int rb = colSize - 1, db = rowSize - 1;
			int direction = 0;
			int col = 0, row = 0;
			while(lb<=rb && ub <= db)
			{
				result.push_back(matrix[row][col]);
				switch(direction)
				{
					case 0:
						if(col>=rb)
						{
							direction = 1;
							row = row + 1;
							ub++;
						}
						else
							col = col + 1;
						break;
					case 1:
						if(row>=db)
						{
							direction = 2;
							col = col - 1;
							rb--;
						}
						else
							row = row + 1;
						break;
					case 2:
						if(col<=lb)
						{
							direction = 3;
							row = row - 1;
							db--;
						}
						else
						{
							col = col - 1;
						}
						break;
					default:
						if(row <= ub)
						{
							direction = 0;
							col = col + 1;
							lb++;
						}
						else
							row = row - 1;

				}
			}
			return result;
		}
};


