package com.app.service;


import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

import com.app.entities.Employee;
import com.app.repository.EmployeeRepository;

@Service
@Transactional
public class EmployeeServicesImpl implements EmployeeServices{

	@Autowired
	private EmployeeRepository empRepo;
	@Override
	public List<Employee> getAllEmployee() {
		// TODO Auto-generated method stub
		return empRepo.findAll();
	}

	@Override
	public Employee addEmployeeDetails(Employee emp) {
		// TODO Auto-generated method stub
		return empRepo.save(emp);
	}

}
