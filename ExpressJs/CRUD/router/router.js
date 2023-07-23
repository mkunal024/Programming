const express=require("express");
const router=express.Router();
const connection=require('../db/dbconnect')

router.get("/student",(req,resp)=>{
    connection.query("select * from student",(err,data)=>{
        if(err){
            resp.status(500).send("data not found"+JSON.stringify(err))
        }
        else{
            resp.send(data)
        }
    })
})

router.post("/student/insert",(req,resp)=>{
    var sid=req.body.sid;
    var sname=req.body.sname;
    connection.query("insert into student values(?,?)",[sid,sname],(err,result)=>{
       console.log(result);
       if(err){
        resp.status(500).send("data not inserted")
       } 
       else{
        if(result.affectedRows>0)
        resp.send("{'msg':'inserted successfullt'}")
        else
        resp.send("{'msg':'not inserted'}")
       }
    })
})

router.put("/student/update",(req,resp)=>{
    var sid=req.body.sid;
    var sname=req.body.sname;
    connection.query("update student set sname=? where sid=?",[sname,sid],(err,result)=>{
        console.log(result);
        if(err){
            resp.status(500).send("data not updated")
        }
        else{
            if(result.affectedRows>0)
            resp.send("{'msg':'update successfully'}")
            else
            resp.send("{'msg':'not updated'}")
        }
    })
})

router.delete("/student/delete/:sid",(req,resp)=>{
    connection.query("delete from student where sid=?",[req.params.sid],(err,result)=>{
        console.log(result);
        if(err){
            resp.status(500).send("data not deleted")
        }
        else{
            if(result.affectedRows>0)
            resp.send("{'msg':'delete successfully'}")
            else
            resp.send("{'msg':'not deleted'}")
        }
    })
})

module.exports=router;

