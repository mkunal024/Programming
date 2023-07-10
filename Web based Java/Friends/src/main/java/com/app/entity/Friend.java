package com.app.entity;

import java.time.LocalDate;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.Table;

import lombok.AllArgsConstructor;
import lombok.Getter;
import lombok.NoArgsConstructor;
import lombok.Setter;
import lombok.ToString;

@Entity
@Table(name="friend")
@NoArgsConstructor
@AllArgsConstructor
@Getter
@Setter
@ToString(exclude="password")
public class Friend extends BaseEntity{
	
	@Column(name="name", length=20)
	private String name;
	@Column(name="Address", length=10)
	private String address;
	@Column(name="email", length=20,unique=true)
	private String email;
	@Column(name="password", length=20,nullable=false)
	private String password;
	@Column(name="DOB")
	private LocalDate dob;
	

}
