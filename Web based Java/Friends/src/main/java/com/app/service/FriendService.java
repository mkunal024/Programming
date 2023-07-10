package com.app.service;

import java.util.List;

import com.app.entity.Friend;

public interface FriendService {

	List<Friend> getAllFriend();
	
	Friend addFriendDetails(Friend f);
	
	Friend updateFriendDetails(Friend f);
	
	String deleteFreindDetails(long frdId);
}
