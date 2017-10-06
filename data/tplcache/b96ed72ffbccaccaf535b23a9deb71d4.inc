<li class="dropdown">
								<a href="{dede:field name='typeurl'/}" title="Home" class="dropdown-toggle" role="button" aria-haspopup="true" aria-expanded="false">{dede:field name='typename'/}</a>
								<i class="ddl-switch fa fa-angle-down"></i>{dede:php}$n=0;{/dede:php}
								<ul class="dropdown-menu">				
									{dede:channel type='son'}{dede:php}if($n == 0){echo 'ok';}{/dede:php}<li><a href="[field:typelink/]" title="homepage 1">[field:typename/] 1</a></li>{/dede:channel}
								</ul>
							</li>