#include <bits/stdc++.h>
using namespace std;
struct Distance{
	int feet;
	float inches;
	};
	struct Volume{
		Distance length;
		Distance width;
		Distance height;
		};
		
		int main()
		{
			Volume room={{10,6.5},{20,7.5},{30,8.5}};
			float l,w,h;
			l=room.length.feet+room.length.inches/12;
			w=room.width.feet+room.width.inches/12;
			h=room.height.feet+room.height.inches/12;
			cout<<"volume of room : "<<l*w*h;
			}
