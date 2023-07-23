const express=require("express");
const router=express.Router();
const connection =require('../db/dbconnect')

router.get("/product",(req,resp)=>{
    connection.query("select * from product",(err,result)=>{
        if(err){
            resp.status(500).send("data not found"+JSON.stringify(err))
        }
        else{
            resp.send(result)
        }
    })
})

router.post("/product/insert",(req,resp)=>{
    var pid=req.body.pid;
    var pname=req.body.pname;
    var pdesc=req.body.pdesc;
    connection.query("insert into product values (?,?,?)",[pid,pname,pdesc],(err,result)=>{
        console.log(result);
        if(err){
            resp.status(500).send("data not inserted")
        }
        else{
            if(result.affectedRows>0)
             resp.send("data inserted")
             else
             resp.send("data is not inserted")
        }
    })
})

router.put("/product/update",(req,resp)=>{
    var pid=req.body.pid;
    var pname=req.body.pname;
    var pdesc=req.body.pdesc;
    connection.query("update product set pname=?, pdesc=? where pid=?",[pname,pdesc,pid],(err,result)=>{
        console.log(result);
        if(err){
            resp.status(500).send('data not updated')
        }
        else{
            if(result.affectedRows>0)
            resp.send("data updated")
            else
            resp.send('data not updated')
        }
    })
})

router.delete("/product/delete/:pid",(req,resp)=>{
    connection.query("delete from product where pid=?",[req.params.pid],(err,result)=>{
        console.log(result);
        if(err){
            resp.status(500).send("data not deleted")
        }
        else{
            if(result.affectedRows>0)
            resp.send("data deleted")
            else
            resp.send("data is not deleted")
        }
    })
})

router.get("/product/:pid",(req,resp)=>{
    connection.query("select * from product where pid=?",[req.params.pid],(err,result)=>{
        if(err)
        {
            resp.status(500).send("data not found")
        }
        else{
            resp.send(result)
        }
    })
})
module.exports=router;