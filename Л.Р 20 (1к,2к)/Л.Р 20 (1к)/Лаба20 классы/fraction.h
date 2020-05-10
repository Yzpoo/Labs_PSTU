
struct  fraction
{
public:

	float first;
	float second;
	double function(double x)
	{
		double a = first * x + second;
		return a;
	};
	
};