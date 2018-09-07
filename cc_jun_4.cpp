/* 
	Author   : Abhinav
   
	Modified : 08-06-2018 11:47:02 AM
*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long double ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

ll sq(ll x){
	return x*x;
}

int main(){
	faster;
	ll x1,x2,x3,y1,y2,y3,z1,z2,z3,x0,y0,z0,xd,yd,zd,r;
	ll xa,xb,ya,yb,za,zb,a,b,c,C,t1,t2,t3;
	long t;
	cin >> t;
	while(t--){
		cin >> x1 >> y1 >> z1 >> x0 >> y0 >> z0 >> xd >> yd >> zd >> x3 >> y3 >> z3 >> r;
		xa = x0-x1;
		xb = x1-x3;
		ya = y0-y1;
		yb = y1-y3;
		za = z0-z1;
		zb = z1-z3;
		C = sq(x3)+sq(y3)+sq(z3)+sq(x1)+sq(y1)+sq(z1)-2*(x3*x1+y3*y1+z3*z1)-sq(r);
		a = (sq(xd)*(sq(xb)-C)+sq(yd)*(sq(yb)-C)+sq(zd)*(sq(zb)-C)) + 2*(xd*yd*xb*yb+yd*zd*yb*zb+zd*xd*zb*xb);
		b = 2*(xd*xa*(sq(xb)-C)+yd*ya*(sq(yb)-C)+zd*za*(sq(zb)-C)) + 2*((xa*yd+xd*ya)*xb*yb+(xa*zd+xd*za)*xb*zb+(za*yd+zd*ya)*zb*yb);
		c = (sq(xa)*(sq(xb)-C)+sq(ya)*(sq(yb)-C)+sq(za)*(sq(zb)-C))+ 2*(xa*ya*xb*yb+ya*za*yb*zb+za*xa*zb*xb);
		//cout << -b - sqrt(sq(b)-4*a*c) << "\n";
		//cout << 2*a << "\n";
		if(a != 0){
			t1 = (-b + sqrt(sq(b)-4*a*c))/(2*a);
			t2 = (-b - sqrt(sq(b)-4*a*c))/(2*a);
		}
		else{
			t3 = -c/b;
			cout << setprecision(15) << showpoint << t3 << "\n";
			continue;
		}
		//cout << a << " " << b << " " << c << "\n";
		//cout << t1 << " " << t2 << "\n";
		cout << setprecision(15) << showpoint << max(t1,t2) << "\n";
	}
	return 0;
}
