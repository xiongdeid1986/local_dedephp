<li class="{dede:php}$n=0;if($n==0){echo 'active';}$n++;{/dede:php} dropdown">
								<a href="{dede:field name='typeurl'/}" title="Home" class="dropdown-toggle" role="button" aria-haspopup="true" aria-expanded="false">{dede:field name='typename'/}</a>
								<i class="ddl-switch fa fa-angle-down"></i>
								<ul class="dropdown-menu">				
									{dede:channel type='son'}<li><a href="[field:typelink/]" title="homepage 1">[field:typename/] 1</a></li>{/dede:channel}
								</ul>
							</li>