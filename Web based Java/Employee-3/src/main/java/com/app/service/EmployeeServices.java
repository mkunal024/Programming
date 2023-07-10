package com.app.service;

import java.util.List;

import com.app.entities.Employee;

public interface EmployeeServices {

	List<Employee> getAllEmployee();
	Employee addEmployeeDetails(Employee emp);
}
