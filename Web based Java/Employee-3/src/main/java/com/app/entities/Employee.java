package com.app.entities;

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
@Table(name="Pass")
@NoArgsConstructor
@AllArgsConstructor
@Getter
@Setter
@ToString(exclude="password")
public class Employee extends BaseEntity{

	@Column(name="Name",length=20)
	private String name;
	@Column(name="Email",length=20,unique=true)
	private String email;
	@Column(name="Password" ,length=20,nullable=false)
	private String password;
	@Column(name="Join_Date")
	private LocalDate joinDate;
}
