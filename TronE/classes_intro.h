# ifndef summerlight_class_intro
# define summerlight_class_intro
# include <cmath>
# include <string>
using namespace std;

class Girl
{
private:
	string name;
	string ethnicity;
	int age;

public:
	Girl(string n = "Amy Santiago", string eth = "Latin", int a = 27)
	{
		name = n;
		ethnicity = eth;
		age = a;
	}
	string getName() const
	{
		return name;
	}
	string getEthnicity() const
	{
		return ethnicity;
	}
	int getAge() const
	{
		return age;
	}
	void setAge(int ag)
	{
		age = ag;
	}
};

class Love
{
private:
	Girl girl;

public:
	Love(const Girl&);
	void sayLove();

};

Love::Love(const Girl &gl)
{
	girl = gl;
}
void Love::sayLove()
{
	cout << "Love you " + girl.getName() << endl;
}

#endif
