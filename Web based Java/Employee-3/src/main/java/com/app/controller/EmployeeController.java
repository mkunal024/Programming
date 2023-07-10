package com.app.controller;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.CrossOrigin;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.app.entities.Employee;
import com.app.service.EmployeeServices;

@RestController
@RequestMapping("/employee")
@CrossOrigin(origins="http://localhost:3000")
public class EmployeeController {
	@Autowired
	private EmployeeServices eService;
	
	public EmployeeController() {
		System.out.println("in cntr"+getClass());
	}
     
	@GetMapping
	public List<Employee> listEmp(){
		System.out.println("in list emp");
		return eService.getAllEmployee();
	}
	
	@PostMapping
	public Employee saveEmpDetails(@RequestBody Employee e) {
		System.out.println("in save"+e);
		return eService.addEmployeeDetails(e);
	}
}
