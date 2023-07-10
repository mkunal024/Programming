package com.app.controller;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.CrossOrigin;
import org.springframework.web.bind.annotation.DeleteMapping;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.PutMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.app.entity.Friend;
import com.app.service.FriendService;

@RestController
@RequestMapping("/friend")
@CrossOrigin(origins="http://localhost:3000")
public class FriendController {

	@Autowired
	private FriendService fService;
	
	public FriendController() {
		System.out.println("in cntr"+getClass());
		
	}
	
	@GetMapping
	public List<Friend> listFriend()
	{
		System.out.println("in list emp");
		 return fService.getAllFriend();
	}
	
	@PostMapping
	public Friend addFriend(@RequestBody Friend f)
	{
		return fService.addFriendDetails(f);
	}
	
	@PutMapping
	public Friend updateFriend(@RequestBody Friend f)
	{
		return fService.updateFriendDetails(f);
	}
	
	@DeleteMapping
	public String deleteFriend(@PathVariable Long id)
	{
		return fService.deleteFreindDetails(1);
	}
}
