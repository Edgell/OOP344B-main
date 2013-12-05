class A {int derp;};

class B : public virtual A {int herp;};

class C : public virtual A {int glerp;};

class D : public B, public C {int serp;};

int main()
   {
   D a;


   return 0;
   }