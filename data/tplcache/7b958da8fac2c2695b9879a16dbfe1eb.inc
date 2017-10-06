<li class="dropdown">
								<a href="{dede:field name='typeurl'/}" title="Home" class="dropdown-toggle" role="button" aria-haspopup="true" aria-expanded="false">{dede:field name='typename'/}</a>
								<i class="ddl-switch fa fa-angle-down"></i>
								{dede:channel type='son'}[field:global name=autoindex runphp='yes']if(@me==0) @me='<ul class="dropdown-menu">';[/field:global]<li><a href="[field:typelink/]" title="homepage 1">[field:typename/] 1</a></li>[field:global name=autoindex runphp='yes']if(@me==0) @me='</ul>';[/field:global]{/dede:channel}
							</li>