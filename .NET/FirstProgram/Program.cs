// See https://aka.ms/new-console-template for more information
Console.WriteLine("Hello, World!");
Console.WriteLine("HI");
DateTime dt=DateTime.Now;
Console.WriteLine(dt);

Employee emp=new Employee(1,"Ayush","Pune",25000,3000,10);
Console.WriteLine(emp);
Console.WriteLine("salary = "+emp.ComputePay());

Manager mgr=new Manager(2,"Sid","Pune",25000,3000,10,5000);
Console.WriteLine(mgr);
Console.WriteLine("salary = "+mgr.ComputePay());