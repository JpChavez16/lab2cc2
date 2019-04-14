double computePi(const int n)
{
	srand(time(0));

	int dartsInCircle=0;
	for(int i=0;i<n;++i)
	{
	  double x=rand()/(double)Rand_Max, y=rand()/(double)
	      RAND_MAX;
	  if(sqrt(x*x + y*y)<1)
	  {
          ++dartsInCircle;        

	  }    
	}
}
return dartsInCircle / static_cast<double>(n)*4
