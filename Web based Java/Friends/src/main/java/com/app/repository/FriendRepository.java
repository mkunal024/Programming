package com.app.repository;

import org.springframework.data.jpa.repository.JpaRepository;

import com.app.entity.Friend;

public interface FriendRepository extends JpaRepository<Friend,Long> {

}
