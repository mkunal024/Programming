package com.app.service;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

import com.app.entity.Friend;
import com.app.repository.FriendRepository;

@Service
@Transactional
public class FriendSeviceImpl implements FriendService{

	@Autowired
	private FriendRepository fRepo;
	
	@Override
	public List<Friend> getAllFriend() {
		// TODO Auto-generated method stub
		return fRepo.findAll();
	}

	@Override
	public Friend addFriendDetails(Friend f) {
		// TODO Auto-generated method stub
		return fRepo.save(f);
	}

	@Override
	public Friend updateFriendDetails(Friend f) {
		// TODO Auto-generated method stub
		return fRepo.save(f);
	}

	@Override
	public String deleteFreindDetails(long frdId) {
        
		String msg="Invalid id, Friend details not deleted";
		if(fRepo.existsById(frdId))
		{
			fRepo.deleteById(frdId);
			msg="Friend with id "+frdId+" deleted!!";
		}

		return msg;
	}

}
