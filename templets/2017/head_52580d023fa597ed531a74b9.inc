<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><!--<SCRIPT language=JavaScript>
function click(e) { 
if (document.all) { 
if (event.button==1||event.button==2||event.button==3) { 
oncontextmenu='return false'; 
} 
} 
if (document.layers) { 
if (e.which == 1) { 
oncontextmenu='return false'; 
} 
} 
} 
if (document.layers) { 
document.captureEvents(Event.MOUSEDOWN); 
} 
document.onmousedown=click; 
document.oncontextmenu = new Function("return false;") 

var travel=true 
var hotkey=17 /* hotkey即为热键的键值,是ASII码,这里99代表c键 */ 
if (document.layers) 
document.captureEvents(Event.KEYDOWN) 
function gogo(e) 
{ if (document.layers) { 
if (e.which==hotkey&&travel){ 
alert("拒绝盗版，本站禁止拷贝.谢谢合作!"); } } 
else if (document.all){ 
if (event.keyCode==hotkey&&travel){ alert("拒绝盗版，本站禁止拷贝.谢谢合作!"); }} 
} 
document.onkeydown=gogo </SCRIPT>-->
<link href="/css/reset.css" rel="stylesheet" type="text/css" />
<script type="text/javascript" src="/js/jquery.1.4.4.min.js"></script>
<script type="text/javascript" src="/js/lrtk.js"></script>
<!--[if IE 6]>
<script src="/templets/yc/image/DD_belatedPNG.js"></script>
<script>
  /* EXAMPLE */
  DD_belatedPNG.fix('body,.tog,.tog span,.togclose span,.togclose,.index_tc1,.tc-box h1,.sy_2014cont5 .cont h2,.aubody_a1,.aubody_a2,.aubody_a3');
  
  /* string argument can be any CSS selector */
  /* .png_bg example is unnecessary */
  /* change it to what suits you! */
</script>
<![endif]--> 

<body>
<!-- 2015 代码 开始 -->
<?php include $this->CompilerInclude("tog_contact.htm");
 ?>
<!-- 2015 代码 结束 -->
<div class="new_top"></div>
	<div id="topbar">
	<h1><u><b>传奇一条龙</b></u>,<?php echo $GLOBALS['cfg_cmsurl']; ?>全国最专业的传奇私服一条龙公司，第天发布最新传奇私服，如果觉得好请告诉你身边的朋友.</h1>
	</div>
	<div style="background:url('/templets/yc/image/2012_xi.gif') no-repeat center top ;"> 
	 <div class="headmain">
 <div id="aulogo" style="width:284px;height:78px;_height:74px;">
 <a href="index.html"  style="text-decoration:none"><img src="/templets/yc/image/jiaff.gif"  width="284px" height="78px" alt="爱信GM创富一条龙"/></a>
 </div>
 <div id="headright"><div class="headrtopbg">
 <a href="/Cooperation" target="_blank">合作流程</a><strong>|</strong>
 <a href="/remit.html" target="_blank">公司介绍</a><strong>|</strong> 
 <a href="/pay" target="_blank">汇款方式</a><strong>|</strong>
 <a href="/comm/CustomerService" target="_blank">联系客服</a><strong>|</strong> 
 <a href="/comm/daili" target="_blank">先行赔付</a>
 </div>
 <img src="/templets/yc/image/jiaff_ora_top_03.gif" ><div id="headmenu">
 <table width="696" border="0" align="center" cellpadding="0" cellspacing="0"><tr>
 <td class="headmenul"></td>
 <td valign="top" id="menubnt"><ul>
 <li class="head_li11"><a href='/'>首 页</a></li>
 <?php
$atts = array();
$atts['tagname'] = 'channel';
$atts['type'] = 'top';
$atts['row'] = '8';
$blockValue = MakePublicTag($atts,$this->refObj,$fields); 
if(is_array($blockValue) && count($blockValue) > 0){
foreach( $blockValue as $key=>$fields )
{
?>
 <li class="head_li11"><div class="auheadmenurr[field:global.autoindex function="@me += 1"/]"><a href='[field:typeurl/]' [field:rel/]>[field:typename/]</a></div></li>
 <?php
}
}
?>
 <li><a href="/remit.html" >简 介</a></li>
 </ul></td><td class="headmenur"></td></tr></table></div></div></div>