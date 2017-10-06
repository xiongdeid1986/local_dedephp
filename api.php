<?php
/**
    12GM 自定义接口
    GetOne 取得一条
    dirname(__FILE__)./include/dedesql.calss.php  数据库类路径
 */
require_once (dirname(__FILE__) . "/include/common.inc.php");
$act = @$_GET["act"];
if($act == "c"){ // c=count
    $row = $dsql->ExecNoneQuery("SELECT `aid` FROM `dede_addonarticle`");
    $c["a"] = $row->num_rows;//文章总数
    $row = $dsql->ExecNoneQuery("SELECT `aid` FROM `dede_addonshop`");
    $c["mir"] = $row->num_rows;//版本总数
    $row = $dsql->ExecNoneQuery("SELECT `id` FROM `dede_guestbook`");
    $c["b"] = $row->num_rows;//版本总数
    $row = $dsql->ExecNoneQuery("SELECT `aid` FROM `dede_addonsoft`");
    $c["s"] = $row->num_rows;//软件总数
    $row = $dsql->GetOne("SELECT * FROM `dede_info` WHERE `name`='count'");
    $c["t"] = date("m/d h:i",(INT)$row["time"]);
    $c_ = (INT)$row["value"];
    $c_++;
    $dsql->ExecuteNoneQuery("UPDATE `dede_info` SET `value`=".$c_.",`time`=".time());
    $c["c"] = $c_;//访问统计
    $r = json_encode($c);
    exit($r);
}
if($act == "id_select_type"){//取得广告类型
    $row = $dsql->GetOne("SELECT * FROM `dede_channeltype` where `id`=17");
    $r = preg_replace('/\s+/', '', $row['fieldset']);
    $r = preg_replace('/\n/', '', $r);
    $r = preg_replace('/\r/', '', $r);
    $r = preg_replace('/\n\r/', '', $r);
    $r = preg_replace('/\r\n/', '', $r);
    //echo $r;
    $a = explode('><field',$r);
    $r = array();
    foreach ($a as $v) {
        $v_ = preg_replace('/\>/', '', $v);
        $v_ = preg_replace('/\</', '', $v_);
        $v_ = preg_replace('/^field/', '', $v_);
        preg_match('/^\:(.+)itemname/', $v_, $k_);
        $k_ = preg_replace('/itemname/', '', $k_[0]);
        $k_ = preg_replace('/\:/', '', $k_);

        $v_ = preg_replace('/^.+?\=\"/', '', $v_);
        $v_ = preg_replace('/\".+/', '', $v_);
        $r[$k_] = $v_;

        //$k_ = preg_replace('//', replacement, subject);
        # code...
    }
    $r = json_encode($r);
    //var_dump($a);
    exit($r);
}
