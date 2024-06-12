/*
⣿⣿⣿⢿⣿⣻⣟⣿⣻⣟⣿⣻⣟⣿⣻⣟⣿⣻⣟⣿⣻⣟⣿⣻⣟⣿⣻⣟⣿⣻⣟⣿⣻⣟⣿⣻⣟⣿⣻⣟⣿⣻⣟⣿⣻⣟⣿⣻⣟⣿⣻⣟⣿⣻⣟⣿⣻⣟⣿⣻⣟⣿⣻⣟⡿⣽⣻⡽⢯⡿⣽⣫⡟⣽⣫⢟⣽⢫⡟⣽⢫⡟⣭⡻⣭⢻⡭⢯⡽⣭⢯⡽⣭⠻⣜⡣⢟⣜⡣⢟⡜⣣⢛⡜⣣⢛⡜⣣⢏⡼⣡⢏⡼⣡⢏⡼⣡⢏⡼⡱
⣿⣷⣻⣟⣾⣳⢿⣞⣷⣻⣞⣷⣻⣞⣷⣻⣞⣷⣻⣞⣷⣻⣞⣷⣻⣞⣷⣻⣞⣷⣻⣞⣷⣻⣞⣷⣻⣞⣷⣻⣞⣷⣻⣞⣷⣻⣞⣷⣻⣞⣷⣻⣞⣷⣻⣞⣷⣻⣞⣷⣻⣞⡷⣯⣟⡷⣯⡽⣯⢷⣏⡷⣽⣣⢯⣟⢮⣯⢽⣚⡷⣹⢧⣻⡜⣧⣛⢧⡻⣜⢮⡳⣭⢻⡔⣏⡳⢎⡝⢮⠼⣱⢫⠼⣱⢫⡜⡱⢎⠶⡱⢎⠶⡱⢎⠶⡱⢎⠶⣙
⣿⢿⣽⡾⣷⣟⣯⢿⡾⣽⣻⢾⣽⣻⢾⣽⣻⢾⣽⣻⣞⣯⣟⣾⣳⣟⣾⣳⣟⣾⣳⣟⣾⣳⣟⣾⣳⣟⣾⣽⣻⢾⣽⣻⢾⣽⢾⣯⢷⣟⣾⣳⣟⣾⣳⣟⣾⣳⣟⣾⣳⢯⣟⡷⢯⣟⡷⣻⣵⡻⣾⣱⢷⣫⠷⣞⢯⡞⣧⢟⡼⣏⢷⣣⢟⡵⣫⢞⡽⣎⢷⡹⣞⢣⡞⣱⢭⡛⡼⣙⡞⣥⣋⢗⣣⠳⣜⡹⢎⡳⣙⢎⡳⣙⢎⡳⣙⢮⡹⣒
⣿⣯⣷⢿⣳⣯⣟⣯⡿⣽⢯⣿⢾⣽⣻⢾⣽⣻⣞⡷⣯⢷⣻⣞⣷⣻⣞⣷⣻⣞⣷⣻⣞⣷⣻⣞⣷⣻⣞⣷⣻⢯⣷⣟⡿⣞⡿⣞⣯⡿⣞⣷⣻⣞⣷⣻⣞⣷⣻⣾⣽⣿⣾⣿⣿⣾⣿⣷⣿⣷⣯⣟⣾⣭⢿⡹⣾⣹⢮⣏⢷⣫⢞⡵⣫⢷⡹⣎⢷⡹⣎⠷⡭⢮⡕⣏⠶⣹⢱⢣⠞⡴⣩⠞⡴⣋⠶⣙⢮⡱⣍⢮⡱⣍⢮⡱⡍⢶⣑⢣
⣿⡾⣽⡿⣽⡾⣽⣳⡿⣯⣟⣾⣻⢾⣽⣻⣞⡷⣯⢿⡽⣯⣷⣻⣞⣷⣻⣞⣷⣻⣞⣷⣻⣞⣷⣻⣞⣷⣻⢾⡽⣟⣾⣽⣻⡽⣟⣯⣷⣿⣿⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣧⣛⡾⣼⢣⡟⣮⢳⡝⣮⢳⡝⣮⠳⣭⢛⡼⢣⢞⡬⡳⣍⢎⢧⡛⡴⢣⡛⡴⣍⢞⡱⢎⡵⣊⠶⡱⢎⡖⣱⡙⢦⡍⡖
⣿⣻⣽⣟⡷⣟⣯⡷⣟⡷⣯⢷⣻⣟⣾⣳⢯⡿⣽⢯⣟⡷⣯⢷⣻⣞⣷⣻⣞⣷⣻⣞⣷⣻⣞⣷⣻⢾⡽⣯⣟⣯⡷⣯⣷⣟⣯⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣾⣵⣫⢞⡵⣏⢾⡱⢯⡞⡵⣛⢦⣛⡼⣍⠾⣰⠳⡜⣎⠶⡹⣜⢣⡝⡲⣍⢮⡱⢫⠴⣩⠞⣡⠳⡜⡥⣚⢥⡚⡜
⣿⣽⣳⣯⣟⣯⡷⣟⣯⢿⡽⣯⢷⣻⢾⡽⣯⢿⣽⣻⢾⣽⣻⢯⣷⣻⣞⣷⣻⣞⣷⣻⣞⣷⣻⢾⡽⣯⢿⡽⣞⣯⢿⣳⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣞⡽⢮⡝⣧⡛⣵⡩⢖⣣⠞⣬⠳⣥⢛⡼⣌⢳⡱⢎⢧⡚⡵⣊⠶⣉⢧⢛⡤⣛⠴⣋⠼⡱⡜⣆⢧⡙
⣿⢾⣽⡾⣽⣳⣟⣯⣟⣯⢿⡽⣯⣟⣯⢿⣽⣻⢾⣽⣻⢾⣽⣻⡞⣷⣻⣞⣷⣻⣞⣷⣻⢾⡽⣯⢿⡽⣯⣟⣯⣟⣯⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣣⢟⠶⣙⢦⡛⡵⢪⡝⢦⡛⡴⣋⠶⣩⢖⡹⢎⠶⡹⠴⣩⠞⡱⢎⡣⠞⡴⢋⡼⣡⠣⡵⣈⠦⣙
⣿⢯⣷⣟⣯⡷⣯⣷⣻⣞⣯⣟⣷⣻⣞⡿⣾⣽⣻⢾⡽⣻⡞⣷⡻⢷⣛⣾⣳⣟⣾⣳⣯⡿⣽⢯⡿⣽⣳⣟⡾⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⣟⣿⢻⡽⢺⡝⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣎⢯⡹⣆⠻⣜⢣⠞⣥⢛⡴⣩⢞⡱⢎⡵⢋⡞⣱⢋⠶⣉⠷⡩⢞⡱⣘⠣⢖⡡⢓⡴⣉⠖⣡
⣿⣻⢷⣻⡾⣽⢷⣯⢷⣻⢾⡽⣞⡷⣯⣟⣷⣳⢯⣟⢾⣳⢟⣳⣟⣯⣟⣾⣳⡽⣞⡷⣯⢿⡽⣯⣟⣷⣻⣞⣿⣿⣿⡟⢥⠲⡝⣾⣟⣿⣿⣻⣿⣟⣿⣯⢿⣞⣷⣻⣽⣚⠷⣘⢧⡚⡕⢦⢫⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣲⢣⡭⢳⢬⢣⡛⡴⣋⠶⡱⢎⡵⢋⡜⣣⠞⡥⢫⡜⡱⢎⡱⢎⠴⢣⡙⢦⡙⢦⠱⣌⠚⡤
⣿⣽⣻⢷⣻⢯⣟⡾⣯⣟⣯⢿⣽⣻⢷⣻⢮⣽⣳⢯⣻⣭⡟⣷⣞⣳⣞⡷⣯⢿⡽⣽⣏⣯⣟⣷⣻⣞⣷⣻⣿⣿⠫⠄⣉⣳⣽⣼⣿⣿⣿⢿⣟⣿⢯⣟⡿⣞⣷⡳⢞⡜⢢⠏⡖⡩⢞⡥⣛⣞⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⢣⢞⡱⢎⢧⡙⢶⡩⢞⡱⣋⠶⣩⠞⣡⠞⣱⠣⡜⡱⢊⠖⡩⢎⡱⡘⠦⡑⢎⡱⢌⡓⡔
⣿⢾⣽⣻⣯⢿⣽⣻⢷⣻⣞⣯⢷⡯⣟⣞⡿⣼⢏⣯⢷⣳⣻⣳⣞⢷⣫⣟⡷⣯⣟⢷⣻⢮⡽⣞⣷⡻⣞⣿⣿⠁⠳⢾⣧⣽⣞⣿⣿⣷⣿⣿⣿⣿⣿⣿⣿⡿⣿⡝⣮⢞⡳⣎⠳⡵⢊⡴⢻⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⢮⠳⣍⠶⣙⢦⡙⣎⠵⣊⠗⡱⢎⡱⣊⠥⡓⣬⢱⡉⢎⡱⢊⠴⣡⠣⣙⠢⡑⠦⡱⢌
⣿⢯⣟⡷⣯⣟⣾⡽⣯⢷⣻⣞⣯⣽⣻⣼⣛⣾⣛⡾⣏⡷⣏⡷⣞⣯⢷⢯⡽⣶⢯⣛⣧⢿⡽⣳⢾⣽⣻⣿⠃⢉⡷⣿⣹⢯⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣯⡿⣯⢟⡞⣞⡳⣜⣫⡑⠳⠾⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢌⡳⢬⢳⡩⢖⡹⡸⡜⡡⢏⡕⢎⡱⣉⠖⡱⢢⠱⡘⠦⡑⣍⠲⢄⠳⣄⢣⡙⢆⡱⢊
⣿⣯⢿⡽⣷⣻⣞⡿⣽⢯⣷⣻⢮⢷⣳⣳⠿⣜⣯⢷⣏⡿⣽⣹⢯⣞⣯⢯⣟⡾⣽⣛⣾⣫⡽⢯⣷⣫⣿⡟⢠⣯⣄⢿⣿⣿⣿⡧⣟⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⡱⢦⡝⢳⡒⠦⡄⠛⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣎⡱⣋⠶⣙⢎⡵⢱⠱⣙⠲⡘⢎⡱⢌⢎⡑⢣⠱⣡⢣⡑⠦⡙⣌⢃⢆⠣⡜⠢⣅⠣
⣿⣞⣿⡽⣷⢯⡿⣽⣻⣟⡶⣯⢟⣯⣗⡯⣿⠽⣞⣯⢾⣝⡧⣟⡧⢿⣜⡯⢾⡽⣞⡽⣶⢏⣿⣛⡶⣯⣿⠇⠿⢱⣿⢸⣿⣿⣡⣷⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣎⠧⡝⢲⠱⣌⡠⢘⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣆⠳⣍⢞⡱⢎⠴⣋⢜⣢⡙⡱⢣⠜⡌⠦⣙⢂⠳⡐⠦⣑⢣⠱⡌⠎⡜⢢⡑⢣⠆⢣
⣿⡾⣽⣻⡽⣯⣟⣷⣻⠾⣝⣳⣟⣞⡾⣽⢞⡿⣽⣺⣝⣮⡽⣞⡽⣏⡾⣝⣯⠾⣽⣹⢞⣟⣮⢿⣱⢯⣿⠀⣐⡊⣿⣧⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⣿⣿⣿⣜⢣⠷⢤⡡⠉⠆⣹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡎⡵⣊⢮⡱⢍⡲⢩⡒⢤⢣⡑⢣⠚⢬⡑⢢⢍⠲⣉⠖⡡⢎⠱⡘⡜⣠⠣⣘⢂⢎⡡
⣿⡽⣷⢯⣟⣷⣻⢾⣽⣻⡽⣳⢾⣝⡾⣭⢿⣹⢧⢷⢾⣱⡟⡾⣵⢏⣷⢻⡼⣻⡵⢯⣾⣹⢮⣯⣻⣿⣧⣴⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣻⣶⣭⡞⢣⢏⣬⡱⡌⢒⡠⢹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡜⢲⠍⣦⠱⡎⡜⣡⠚⡔⢢⡙⢢⡙⢦⡘⢥⢊⠵⡨⠜⡐⢎⠱⡐⢆⡡⢒⡡⢊⠴⡐
⣿⣳⣟⡾⣽⢯⣟⡾⣽⣫⢷⣻⣞⣽⣳⣛⣞⢯⣞⠾⣼⢏⣷⡳⡽⣞⡽⣞⢧⡿⣱⠾⣭⡟⡾⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⣿⡿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⠾⢞⡩⣇⠣⠌⡑⢺⣿⣿⣿⣿⣿⣿⣿⣿⢟⣿⣿⣿⡑⢎⡴⢩⡒⢥⠣⣍⠲⣑⠪⡑⢎⡱⢨⠱⡌⢚⠤⢃⠲⡑⡌⢆⠓⡌⢃⠎⡱⠘⡄⢣
⣿⡽⣞⡿⣽⣻⢾⣽⣳⢯⣟⡵⣞⣧⢷⡻⣼⢏⣾⢻⡽⣺⢧⢿⣹⢾⣹⡞⣯⠾⣝⡯⣗⢿⡿⣿⣿⣿⢿⣿⣿⣿⣿⣿⣿⣖⣿⢯⢀⢒⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣟⡶⡷⣎⠷⣤⢓⡒⣩⢒⣿⣿⣿⣿⡟⡹⠋⢴⣆⡘⣿⣷⣏⢲⡘⢥⡙⢆⠳⣨⠱⠌⡥⣙⠢⣅⠣⢃⠍⡆⠣⠍⠦⡑⠌⡌⠱⡈⠆⡜⢠⠃⡜⢠
⣿⡽⣯⣟⡷⣯⣟⡾⣵⣻⠾⣽⣻⡼⣳⢏⣷⢻⢮⣏⡷⣏⢿⡺⣽⣚⣧⢟⣧⢿⣹⢾⣹⢾⣹⢟⡿⢥⣼⣿⣿⣿⣿⣿⣿⣿⣿⢳⠚⡼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢻⣭⡛⠿⡵⣉⠞⣩⠳⢦⡀⢎⣽⣿⣿⣿⣇⢠⣅⠮⠿⢿⠿⣿⣗⠦⣙⢢⡙⣌⠳⣄⠫⡜⡰⢡⠣⡔⢩⢊⠜⡰⢩⠘⡰⢁⠞⡄⢣⠑⡌⠔⡡⢊⠔⡡
⣿⣽⣳⣯⣟⡷⣯⣟⣳⣽⢻⣳⣭⠷⣏⣟⡮⣟⡽⢮⣗⢯⡯⢷⡳⣏⣾⢫⣞⣳⢯⢾⣹⡞⣽⡞⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡭⣇⡋⡔⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣛⢮⡓⢦⡙⣷⡳⣬⣦⢥⡛⣤⡙⣦⣿⣿⣿⣿⣏⣿⢸⣿⣿⣿⣿⣾⣿⡜⣌⠣⣜⠰⢣⢌⡱⢢⢙⣂⠳⢌⡡⠎⢆⡑⢢⠡⡑⢊⠴⡈⢆⠱⣈⠒⡡⠎⡰⢁
⣿⣞⣷⣻⢾⣽⣳⢯⣷⢫⣯⢷⣚⣯⡽⣞⡵⣯⢽⡻⣼⣛⠾⣯⢽⡳⣽⢻⡼⣽⡺⣏⡷⣽⢣⣟⡞⣿⣾⣥⣿⣿⣿⣯⣿⡳⢷⡈⡑⠌⢠⡸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡽⣶⣍⢏⡞⣴⣙⣦⡹⢆⣿⣴⣽⣾⣿⣿⣿⣿⠐⡻⢷⢩⣿⣿⣿⣿⣿⡗⣨⠱⣌⠹⣂⠎⡔⢣⢌⠢⢃⠆⢢⠍⢢⠘⡄⢣⠘⣐⠢⡑⢌⠢⡁⢎⠰⡁⢆⠡
⣿⢾⣳⣯⢿⡾⣽⣻⣼⣻⢞⣽⣹⢶⣻⢼⣻⢼⣳⡻⣵⣫⢟⡮⣗⣻⡼⣳⡽⣖⣻⡝⣾⡱⣟⢮⣽⡟⢻⣿⣿⣿⣟⣿⣯⢳⣦⣷⣶⣿⣿⢿⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣾⣿⣼⣆⢳⣎⠿⣖⣾⣿⣾⣿⣿⣿⣿⣿⡀⣟⢈⣦⣹⣿⣿⢿⣿⠓⡤⢓⣌⢣⠱⡊⢜⡂⢎⡱⢊⡜⢄⠚⡄⢣⠘⡄⢃⠆⡱⢈⠆⡱⢈⠆⡱⢈⠄⡃
⣿⢯⣟⡾⣯⣟⡷⣯⢶⣏⣟⡮⣗⣻⡼⣏⡾⡽⢶⡻⣵⢫⣾⡹⣞⡵⣫⢷⣹⢞⡵⣻⢖⣻⡝⣾⣿⠁⠰⠟⣿⣯⢸⣿⣯⡧⣴⣠⣴⣶⣦⣄⣳⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣻⢿⣿⣿⣮⣷⣾⣿⣿⣯⣿⣿⣿⣿⣿⣿⣿⣟⠃⢿⣿⠟⣽⣿⣿⠣⡙⡔⢣⠜⣢⠣⢍⠢⡙⢄⢢⠡⡘⢄⠣⡘⢄⠣⡘⢄⠊⡄⠣⡐⢄⠃⡔⢠⠃⡌⡐
⣿⢯⡿⣽⣻⢾⡽⢯⡷⣞⢧⣟⣭⠷⣝⡾⣱⠿⣭⢗⣯⢳⡞⣵⡻⣼⣛⢮⡗⣯⡝⣧⡟⣧⢻⡞⣿⠀⠀⣦⣿⣿⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣹⢯⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣠⣛⣷⠿⣫⣾⢃⠧⡱⡘⢥⠚⣄⠳⣈⠱⡈⢆⠢⡑⢌⠢⡑⢌⠢⡑⠰⡈⢆⠡⢃⠌⡂⠜⡠⢂⠅⢢⠁
⣿⢯⣿⣳⣟⣯⣟⣯⠷⣏⡿⡼⣞⢯⣻⠼⣏⣟⢮⣻⡜⣯⢞⣳⡽⣣⢯⣳⢻⡼⣽⢲⡟⣼⡳⣏⢿⣆⠀⢿⣿⣿⣿⣯⣿⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠶⢟⣿⢅⠺⡰⢡⡙⠤⢋⠤⠓⡄⢣⠘⡄⢣⠘⡄⢣⠘⠤⡑⢨⠑⠌⡄⢃⠢⡘⠄⡃⠔⣁⠊⡄⢃
⣿⣻⣞⡷⣿⢮⡽⣞⣿⡹⣞⡽⣞⢯⣳⢻⡝⣮⢟⡶⣻⡝⣞⣧⢻⡵⣫⣗⢯⣳⡭⢷⣫⢷⡹⣎⡯⢿⣆⠘⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⡀⢀⢻⡯⢌⢣⡑⢧⠘⡥⢋⠌⡓⢌⠢⡑⢌⠢⡑⢌⠢⢉⠆⢡⠂⡜⡐⢌⠂⡅⠢⡑⠌⢒⡀⠣⠌⡄
⣿⣳⢯⡿⣽⣏⡿⣽⣲⢟⡽⣞⣭⢷⣫⢟⡼⣏⡾⣳⢧⣛⢷⡺⣝⡾⡵⣞⢯⡖⣯⡳⣝⡮⢷⡹⣞⣻⣿⡄⣿⣿⣿⡟⢛⣫⣿⣿⣿⣿⣿⣿⠟⣿⠛⢿⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⠸⣹⡟⣌⠲⣡⠊⡕⢢⠡⢚⠰⡈⠖⡡⢊⠔⠡⢂⠱⡈⢌⠂⡅⢒⡈⢄⠣⡐⢡⠂⢍⠂⡌⢡⠒⠠
⣿⡽⣯⣟⡷⣯⢷⣳⡽⢾⣹⡞⡽⣎⡷⣫⡽⣞⡵⣛⣮⢟⣮⢽⣣⢟⣵⢫⡾⣹⢖⣯⢳⡝⣧⢻⡜⣷⣿⣿⣿⣿⣿⣴⣿⡿⡏⢻⣿⣟⣤⣽⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⠠⢚⡯⣐⠣⢆⠹⣠⢃⠣⢌⠢⡑⠌⠴⢁⢊⠱⡈⢆⠘⡠⢃⡘⢄⡘⢄⠢⢑⢂⠩⢄⠊⡔⠡⠌⡡
⣿⣽⣳⣯⣟⣷⣛⣶⢻⡝⣧⡻⣝⢾⣱⣏⢷⣹⢞⡽⣎⢿⡜⣧⣛⠾⣜⢯⣳⣛⠾⣜⢧⡻⣜⢧⡻⣜⣿⣿⣿⣿⣿⣿⡟⠳⣿⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⠌⡐⢫⢄⠫⡜⢠⢃⠌⡒⢌⠢⢑⠊⡄⠣⢌⠰⡐⡈⢆⠡⢂⠔⡂⠔⡈⢆⠡⢊⠰⡈⠒⢄⠣⡘⠠
⣿⣞⣷⣻⣞⡾⣝⡾⢯⣽⢺⡵⣏⡟⣶⡹⣞⡽⣚⡷⣹⢮⡻⣵⢫⡟⡽⣎⠷⣭⣛⢮⡳⣝⢮⡳⣝⡞⡶⣿⣿⣿⣿⡿⠈⢀⣸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠀⠬⣙⠆⢳⠘⠤⣉⠆⡱⢈⢆⠡⢊⠰⡁⢆⠡⢂⠱⣀⠣⠌⢒⡈⢆⠡⢂⠱⡈⠤⢡⠉⡂⢆⠡⡁
⣿⢾⣽⣳⢯⣟⡽⣞⡿⣜⣳⡽⣺⡝⣶⢫⢷⡹⣝⠾⣭⣳⢻⣜⡳⣽⢳⣭⣛⢶⣭⢳⡝⣮⢳⡝⣮⣝⡳⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏⡈⠴⣈⢏⠰⣉⠒⡡⢊⠔⡡⢈⠆⡡⢒⠈⡔⡈⢆⠡⡐⢂⡑⠢⡐⢂⠅⡊⠔⡠⢃⠢⡑⠨⠄⡃⠔
⣿⣻⢾⣽⣳⢾⣹⣳⢽⡺⣵⢫⢷⡹⣞⡽⢮⣽⣚⢯⣳⢭⣳⢭⣳⢭⣳⢮⡝⡾⣜⢧⡻⣜⢧⡻⢶⣭⢳⢧⣿⣿⣿⣿⣿⣿⣛⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠃⡐⢈⠲⢡⢎⡱⢄⡩⢐⠡⢊⠄⣃⠰⢁⠢⡑⠰⡈⢄⠃⡔⣁⠢⡑⢄⠃⡌⠰⣁⠒⡄⢃⠌⡑⢌⠰⢁
⣿⣽⣻⢾⡽⣞⣧⢟⣞⣳⡭⣟⢮⢷⡹⣞⣳⢮⡝⣾⣱⢻⡜⣧⣛⢮⡳⣏⢾⣱⢏⡾⣱⢏⡾⣹⢳⣎⡟⡾⣴⢛⣿⣿⣿⣷⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⠭⡀⢡⠌⡡⢂⡅⢺⡔⡨⢔⡡⢊⡅⢒⠠⡑⣈⠒⡈⢅⠒⣈⠒⡐⢄⠒⡨⠐⡌⠰⣁⢂⠒⡈⢆⡘⠰⢈⠢⢁
⣿⢾⡽⣯⢷⣻⢮⣛⣮⢳⣝⣮⣛⢮⢷⡹⣎⢷⣹⠶⣭⣳⣛⠶⣭⡳⣝⡞⣧⣛⢮⣳⡝⣮⢳⣝⡳⢮⣝⡳⣯⣹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⢻⡁⠞⡌⠐⡤⠂⠤⢡⠘⣐⠣⣏⡐⠆⡔⣡⠈⡆⡑⠰⣀⠃⡜⢠⢊⡐⢌⠰⣈⠂⡅⢃⠌⡡⢐⢂⠱⢈⠆⢌⠡⢊⠄⠡
⡿⣯⣟⡷⢯⢷⣫⠷⣭⢷⣚⢶⡹⢮⡳⣝⢮⣳⢭⣛⢶⣣⢏⡟⡶⣝⢮⣝⠶⣭⡳⢧⣻⣜⡳⢮⣝⡳⢮⣽⣟⣩⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⣍⡳⢍⢦⣹⡰⢬⠑⡠⠨⠰⢀⣋⠄⠳⣼⡄⣙⠰⢠⡘⠤⣁⠣⡐⢌⡐⢢⠐⡰⢈⠢⠄⡃⠔⣈⠢⠑⡂⢌⠢⡁⢎⠠⠃⡄⢊⠐
⣿⢷⣯⣟⢯⢷⣫⣟⢮⣳⡝⣮⣛⢧⣛⢮⡳⣝⡮⣝⣮⢳⣏⣞⡳⣝⠾⣜⡻⢶⣹⢳⡳⢮⣝⡳⢮⣝⡳⣞⢿⣭⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⢿⣭⢻⣌⠳⣭⢖⣦⠳⣌⢌⠡⢁⠒⢡⠈⢎⠡⠜⣷⡈⠜⣠⠘⡰⢀⢣⠘⡄⠒⡄⢣⠐⡡⢂⠱⢈⠒⡠⢁⠣⢘⠠⢂⠅⢊⠐⠡⠐⠂⠌
⣿⣻⢶⢯⣛⡾⡵⣞⢯⢶⡹⣖⢯⡞⣭⣳⢻⣜⡳⣝⢮⡳⣞⡼⣳⢭⣛⣮⡝⣧⢏⡷⣹⢳⢮⣝⡳⣎⠷⣭⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⢯⣽⣳⢮⡳⣎⡳⡼⡞⡴⢫⡜⠌⢦⠉⠈⠄⡐⠂⡜⢨⢽⣿⡔⢂⠱⣀⠃⢆⠱⣈⠱⡈⢆⠱⣀⠣⡘⢄⠣⡐⢡⠊⡄⠣⢌⠘⡀⢊⠡⠌⠡⢈
⣟⡷⢯⣟⡽⣺⣝⢾⡹⣎⢷⡹⢮⣝⠶⣭⡳⢮⣝⢮⡳⣝⢮⡳⣝⢮⣳⢮⣝⢮⡻⡼⣭⣛⠾⣜⡳⣭⣛⠶⣭⢿⣹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣏⣟⡳⢞⡥⢯⡽⣭⢳⢧⡹⢜⣣⡙⢾⡀⠎⠡⠀⢄⠡⡀⠣⢎⢿⣿⣧⣖⡠⢉⠆⡒⠤⡑⡈⢆⠱⣀⠣⡘⢄⠣⡘⢄⠣⡘⠰⡈⠆⡁⠢⠐⡈⢂⠁
⣯⣟⣟⣮⡽⣳⢞⣯⢳⡝⣮⢽⡳⣎⡟⡶⣝⢯⡞⣧⣛⢮⢷⡹⣞⢧⣛⠾⣜⢧⡻⣵⢣⣏⠿⣜⡳⢧⣏⠿⣜⡧⣏⡿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⣟⢾⡸⣹⡍⣞⣱⠞⣥⢻⢦⡙⣦⠧⡙⢦⡑⢎⠡⡀⠆⠰⢀⢣⠘⡼⣷⣏⡿⣿⣶⣾⣤⣵⣠⡑⣈⠒⠤⢑⠰⡈⢆⠱⡈⢆⠡⢃⠜⡠⠑⣂⠑⡠⠁⠌
⣷⣻⡼⢶⣻⢵⣫⢞⣧⢻⡜⣧⢻⡼⣹⢳⡝⣮⡝⡶⣭⣛⢮⣳⡝⣮⣝⡻⣜⢧⡻⣜⡳⣞⡽⢮⣝⡳⣎⠿⣜⡳⣝⠾⣭⣛⠿⡿⢿⠿⣿⢿⣿⠋⠛⠛⠿⣿⣿⣿⣿⣿⣿⣿⣞⡧⢷⡩⡜⠶⣥⢯⡙⣧⣾⠵⣣⠝⣌⠣⡜⢢⠡⡁⠂⠅⣂⠢⠘⢤⢫⡝⣻⣷⣻⢞⣽⣻⣟⣿⡿⣿⣶⣮⣴⣡⣈⠆⡑⠌⢢⠁⢎⡐⠡⡀⠎⢠⢁⠂
⣷⣳⢻⣏⣞⢧⣛⡾⣜⢧⡻⣜⣧⢻⡵⣫⢾⡱⣏⢷⣣⢟⣮⢳⡝⡶⣭⢳⡝⣮⢳⣭⢳⡝⣞⡳⢮⡝⣾⡹⢧⡻⣜⡻⢶⡍⡷⣍⣛⠮⡵⢎⣽⠀⠀⠀⠀⢮⣿⣿⣿⣿⣿⣿⡿⡞⣥⢳⡉⢳⡜⣦⢿⡻⣌⠷⣢⠝⣠⠒⡌⢠⠃⡔⢁⠂⠴⢈⡑⢎⡳⢼⢯⡷⣯⣟⣮⢷⣻⣾⣟⡿⣽⣿⣻⣿⣿⣿⣷⣾⣤⣉⡤⠘⢠⠁⡌⠂⡄⢂
⡷⢯⣛⣞⢮⡻⣜⡳⣝⢮⢷⡹⣎⢷⡹⢧⣏⢷⡹⣎⢷⣫⢞⣧⢻⡵⣫⢷⡹⣎⢷⡺⣝⠾⣱⢏⡳⣝⢶⣹⢳⡝⣧⣛⢧⠞⡵⢎⢧⡛⣜⢣⢾⡃⠀⠀⠀⠠⣼⣿⣿⣿⣿⣟⣷⡻⣬⢓⣌⠶⣹⣯⣗⣳⣭⠳⡆⣍⠲⠠⠄⠃⡜⠐⡌⡀⢂⠬⠑⡎⡵⢋⡞⣹⢳⣻⣾⣿⢿⣟⣾⣟⣷⣿⣿⣽⣷⡿⣯⣿⣿⣿⣿⣿⣦⣴⣀⠡⠐⠂
⣟⢯⡽⣎⣯⢳⡭⣗⢯⡞⣧⢻⡜⣯⣝⡳⢮⣏⢷⡹⣎⢷⣫⢞⣧⢻⡵⣫⢷⡹⣎⠷⣭⢻⡥⣏⢷⡹⣎⢷⣫⢞⡵⣭⠺⡭⣝⢮⢣⡝⣬⠓⡾⡇⠀⠀⠀⠐⢼⣽⣿⣿⣿⣿⣷⣿⠶⣏⢬⣛⣷⣻⣞⡷⣊⠷⣉⠦⣁⠣⣘⠐⡈⠱⣀⠖⠡⠀⡝⡘⡔⠫⡔⢣⡞⣿⣿⣿⣿⣿⣿⣾⣿⣿⣾⣿⣾⢿⣟⣷⡿⣯⣿⣿⢿⣿⣿⣿⣾⣤
⣯⣛⢾⡱⣏⢷⡹⣎⢷⡹⣎⢷⣛⠶⣭⣛⠷⣎⢯⡳⡽⣎⢷⣫⢞⣧⢻⡵⣫⠷⣭⢻⡜⣧⢳⡝⣎⢷⡹⣎⢷⣋⠾⣜⢫⡵⣚⡬⢳⡜⢦⡛⡴⣧⠀⠀⠀⠀⠀⢙⣿⣿⣿⣿⣿⣯⡿⣜⡶⣹⣾⢯⣟⣳⡽⢎⡕⢢⠰⣁⠣⡜⢀⠡⡘⢠⠁⢆⠐⡤⢩⠓⣬⢓⡞⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣽⣿⣿⣯⣿⣻⣿⣿
⡷⣭⡗⣯⠽⣎⢷⣫⢞⡵⣫⡞⣭⣛⠶⣭⢻⡼⣣⢟⡵⣫⢞⡵⣫⢞⣧⢻⡵⣻⡜⣧⢻⣜⡳⢞⡭⡞⣵⢫⡞⣭⢻⢬⡳⣜⡱⢺⡱⢎⢧⡙⡖⣿⠀⠐⠄⢀⠀⠀⠉⣿⣿⣿⣿⣿⣟⡷⣏⣷⣿⣿⢿⣻⡝⢮⡜⣡⠓⠬⣑⠜⣨⠂⡁⢃⡚⢤⡈⢠⢃⡝⢦⣛⡾⣽⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣟⣿⣽⣿⣽⣿
⣟⡵⣻⣜⡻⣜⢧⣛⢮⡳⢧⡻⣵⢫⡟⡼⢧⡻⣵⢫⡞⣵⢫⡞⣵⢫⡞⣧⣛⢶⡹⣎⢷⣪⠽⣹⢼⣙⢮⣳⢹⡜⣣⢳⣙⠦⣝⢣⡝⢎⢶⣭⡿⠛⠀⠀⠀⢹⠆⣄⣀⠿⣿⣿⣿⣿⣯⣿⡽⣾⣿⣯⡿⣧⣛⢧⡚⡥⢊⠶⣩⢎⡡⢚⠄⢃⠜⡢⣄⠣⡘⣬⢣⠿⣽⣳⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣯⢞⡵⣎⡷⣹⢎⣯⢳⡽⣳⡝⣮⢳⡽⣹⢧⡻⣜⢧⡻⣜⢧⣻⡜⣧⣛⢶⡹⣎⢷⡹⢶⣩⢏⠷⡮⣝⡞⣬⡓⣞⣱⢫⡜⣹⢬⣳⡾⠟⠋⠁⠀⢀⠀⠀⠀⢸⡅⣦⢉⡉⢿⣿⣿⣿⣿⣽⣿⣿⣿⣿⡿⣖⡻⢦⡛⣌⢏⡾⡵⢪⡕⢯⣌⢣⣌⡱⢎⡧⣙⣤⢏⡿⣵⣿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⢷⣫⢞⡵⣫⢗⡯⣞⢧⡻⣵⢻⡜⣧⢻⡵⣫⢷⡹⣎⢷⡹⣎⢷⡹⢶⡹⣎⢷⡹⢎⡗⣯⣜⢫⢷⡹⡖⣽⠲⣝⡼⢲⣍⣾⠟⠋⡁⢀⠀⠀⠀⢰⣿⠀⠀⠀⠈⡇⠸⣧⣌⣻⣟⣿⣿⣿⣿⣿⣿⣿⣿⡿⣥⣋⢷⡙⣞⣮⡽⣽⢳⣚⠷⣜⡲⣬⡳⢯⣶⢻⣼⣻⣞⣿⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣟⡼⣫⢞⡵⣫⢞⡽⣎⠷⣭⢳⡝⣮⢷⡹⢧⣏⢷⡹⣎⢷⡹⢮⡝⣧⢳⡝⡮⡝⣏⡞⢶⢎⡿⢬⡳⣝⠮⣝⣲⣽⠟⠋⠀⠠⠀⢀⡀⢀⡈⢷⣾⣿⠀⠀⢠⠀⢻⡄⢽⣷⣎⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢧⡍⣎⢿⣼⣳⣿⣿⣿⣽⣿⣿⣿⣿⣿⣿⣾⣿⣿⣷⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⡾⣱⣏⣞⡳⣝⢮⣳⢭⡟⣼⢫⡞⣵⢫⣝⡳⣎⢷⡹⣞⢧⣛⢧⢻⡜⣳⠞⡵⣋⢶⡹⣚⢮⡜⢧⣛⡼⣹⣶⠟⢡⣀⠈⢒⠠⣇⢢⣽⣦⣿⣿⣿⣿⠃⠀⠈⢣⠀⢳⠈⢻⣿⣿⣿⣿⣿⣿⣿⣿⡿⣿⣿⣟⡼⣣⢟⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣿⢿⣻⢯⣟⡳⡽⣎⢷⣛⣾⣳⣿⣿⣿⣿⣿⣿⣿
⣳⢯⡽⣹⢧⡻⣜⢯⡞⣵⢫⡞⣵⢫⡞⣽⢣⡟⡼⢧⡻⣜⡻⣜⢮⣓⢏⡖⢧⠻⣜⡣⢟⣬⢓⡮⢫⣵⡿⠋⠀⠈⢻⣤⣚⡤⢿⡞⣿⣻⣿⣿⣿⠏⠀⠀⠀⠈⡆⠸⡄⠘⣿⣿⣿⣿⣿⣿⣿⣿⡵⣿⣿⣿⣧⣻⣾⣿⣿⣿⣿⣿⣿⣿⢿⡿⣿⣿⡿⣟⣿⣯⣿⣟⡿⣿⣻⣿⣽⣟⣷⣿⢾⣟⡾⣽⣳⢧⣻⣼⣻⣽⣿⣿⣿⣿⣿⣿⣿⣿
⢯⡞⣵⢏⡾⣱⢯⡞⡽⣎⢷⡹⣎⢷⡹⣎⢷⡹⣝⢧⡟⣼⡱⢏⡶⢭⡺⣜⢫⣝⡲⢭⣓⢮⡹⣼⡟⠃⠀⠀⠀⣐⡠⠞⣿⡽⢎⡽⣶⢿⣾⢏⡆⠀⠀⠀⠀⠀⠑⠀⣧⠀⢺⣿⣿⣿⣿⣿⣿⡿⠀⣿⣿⣿⣿⣿⣿⣿⡿⣿⣻⣝⡮⣝⡾⣿⣳⣿⣟⣿⣿⣽⣷⣿⣿⣿⣿⣷⣿⣿⣿⣯⣿⣾⣟⣷⣿⣻⣷⣯⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣟⡼⣣⡟⣼⢣⡟⣼⢳⡝⣮⢳⡝⣮⢳⡝⣾⡱⣏⠾⣜⢧⡝⡞⣜⡣⢗⣎⠳⣎⣵⣫⣼⣶⠟⣉⣠⠀⠀⠀⢀⡿⣷⢍⣙⣧⣿⣾⣿⣫⣝⣾⣤⣄⣲⣤⣹⣦⠲⠤⣄⠀⠈⢿⣿⣿⣿⣿⣿⠃⢤⣿⣿⡿⢫⣙⢮⣳⣿⣿⣿⣿⣿⣯⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⣻⣷⣿⡿⣿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣟⡷⢯
⣞⡳⣝⢾⡱⣏⣞⢧⡻⣜⢧⡻⣜⢧⡟⣼⢣⡝⣮⣛⡼⢎⣞⡹⡲⣍⣷⡾⠟⢋⢉⣥⣶⣾⣿⣿⣿⣿⠿⡩⢞⣷⠟⠉⡐⢎⠛⡍⢯⡽⣻⣿⡻⢿⣿⣿⣿⣿⣷⣦⣜⣦⡀⠹⣿⣿⣿⣿⠏⢀⣿⡿⠉⢁⠣⣞⣯⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⡿⣟⣿⣟⣿⡾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣻⠾⣝⢯
⣯⣝⢾⣣⢟⡼⣎⡷⣹⢎⣯⢳⡝⣮⡝⣮⢳⡝⢶⡹⣜⣫⣖⣽⠿⢋⡡⢴⠶⣞⡾⣞⣷⣿⣾⣿⣿⣟⡶⣡⣿⠋⠀⠀⢁⠢⠕⡚⢡⢎⡱⠭⣽⠿⣟⢿⡻⣝⣮⣿⣿⣿⣷⡧⣿⣿⣿⡋⢥⣿⡏⣠⣄⣠⣔⣫⢿⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⢿⣿⣟⡿⣿⣾⣿⣿⡿⣟⣿⣿⣽⣿⣿⣿⣿⣿⣿⣿⣿⢿⣻⣽⣯⢿⡽⣞
⡷⢮⣳⡝⣮⢳⡝⣾⡱⣏⡞⣧⣛⢶⣽⣮⡷⠿⢛⠛⡫⢍⠋⡅⣎⢱⡙⣎⠿⣜⣻⡽⣿⣾⣿⣿⣿⣿⣿⣿⠏⢀⢠⡐⣠⠉⠒⠬⡁⢎⡰⢿⣬⡻⣜⣯⢷⣻⣿⣿⣿⣿⣿⣷⣉⡟⢦⡑⣮⢯⣴⣭⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢷⣻⡾⣿⣟⣯⡿⣿⣿⣯⣟⣿⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣻⡷⣯⡿⣽⢯
⣽⢳⢧⡻⣜⢧⡻⢶⣹⢮⣽⡶⠿⠛⠉⠀⠐⠤⠣⡘⠐⢊⠒⡌⢂⠧⣜⡎⣷⣹⡾⣽⣷⡿⣿⣿⣿⣿⠿⣡⠲⣌⢶⡹⢿⣆⣙⣲⠱⣮⢙⠶⣣⢿⣽⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡦⠥⣹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⣻⢷⣯⣟⣷⣿⣳⣯⢿⡽⣷⣿⣾⣿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣳⣿⣿⡷⣟⣯⣿
⣳⢯⡞⣵⣫⢞⣽⣳⠟⠋⠁⠀⠀⠀⠀⠐⠠⠂⢀⠈⠄⢡⠘⡰⣍⡞⣴⢯⡷⣯⣟⣿⡾⣟⡿⡹⣍⢆⡳⢣⡽⣘⣮⡟⣽⣿⣿⢣⠷⣌⣯⣛⣷⣻⢾⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⡀⣶⣹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⣟⣯⢷⡿⣜⢯⢾⣭⢿⡿⣿⡿⣿⣾⢿⣿⡿⣿⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣿⣿⣾⣿⣻⣿⣾
⣟⢮⣽⢺⣵⡿⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠤⣀⠢⡜⢢⡝⢲⣟⡾⣽⣯⣿⣿⣻⡽⣛⢥⢳⡱⢎⢎⣝⢣⡻⣵⣳⡿⣟⣿⣞⣯⢿⣝⡶⣛⡾⣽⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠉⢳⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢯⣟⡾⣞⡯⣝⢿⣫⡗⣾⣯⣿⡽⣿⣿⡿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣿⣟⣿⣷⣿
⣻⢞⣼⡟⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣂⠔⣠⠒⣭⠳⡜⣧⣿⣟⣷⣯⢷⣫⢇⡧⣙⢎⢣⠳⡞⡼⣌⢷⣻⢽⣯⢿⡽⣯⣟⡞⡿⣮⣽⢳⣿⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏⠘⢦⡈⢿⣞⣿⣿⣿⣿⣷⡿⣿⣟⡾⣽⣟⡾⣽⢣⡟⣽⣺⢷⣻⢽⣳⣯⣿⢿⣻⣿⣻⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣾⣿
⣿⡟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⢬⡸⣔⢫⢖⣻⣾⣿⠿⣝⡾⣡⠧⣍⠞⣰⠙⢎⡲⢥⣛⣼⣻⡼⢯⡟⣞⢯⣿⣱⢿⡜⣷⡝⣾⢻⣶⣿⣷⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏⢳⣄⡆⣹⣜⣿⣿⣿⣿⣿⣿⣿⢿⣟⣿⣳⢏⡷⣭⢗⣯⣛⣷⢻⣾⢯⣿⣻⣽⣿⣿⣿⣿⣿⣿⣯⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⢆⡞⠶⣱⣮⣾⣿⣿⢿⡽⣛⡮⢱⡡⣚⡜⡸⢣⢛⣤⡝⣫⣼⠶⡽⢾⡹⡞⡭⢞⠶⢭⢞⡹⣞⡽⣮⢿⣟⣯⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡦⠀⣻⣽⢻⡼⣾⢿⣿⣿⢿⣻⣿⣿⣾⣳⢯⡻⣼⢛⡾⢧⣻⣼⣻⣾⢿⣽⣿⣻⣿⣷⣿⣿⣿⣿⣿⣿⣿⣿⣿⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡒⡌⣞⣬⣿⣿⣿⣿⣿⣯⣿⡟⢧⠘⡅⣶⢩⠞⣱⢛⣼⢲⡝⣣⢟⡽⢞⡹⢻⡱⣛⢮⣙⣧⢫⡷⣭⢷⣯⣟⣾⡿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣰⣿⣿⣻⣿⣯⣿⣿⣿⣿⣿⣟⣮⢷⡏⣯⢳⣭⢻⡼⣟⣧⣿⣹⣽⣻⣯⣿⢿⣿⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⠀⠀⠀⠀⠀⠀⠄⠈⠀⠀⠀⡜⣰⣿⣿⣿⣻⣽⣯⢿⣿⣯⠳⡜⢠⢛⡘⢤⡃⣞⡥⢏⡞⡶⣙⢮⣟⡼⡳⣍⣳⣫⡝⣮⣝⣮⣻⡽⢯⣿⣾⣽⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣻⣿⡷⢧⣿⣿⣿⣿⢯⣟⡾⣽⢻⡯⣟⣳⡛⢾⣳⣽⡽⣞⡿⣿⢾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⠀⠀⠀⠀⠀⠀⠀⠀⠠⡘⡼⣼⣿⣻⣷⢿⣽⣿⣽⣿⣿⣦⠃⡄⠙⠦⠸⠀⡗⡌⢲⡛⣜⠶⣙⡞⣼⣱⢯⣝⣣⢿⣝⣯⣟⣾⣳⣿⣿⢯⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣟⡿⣼⣿⣋⢿⡟⣞⣻⣞⡷⣹⢏⡷⣫⢷⣹⣛⣷⣻⣽⣿⣽⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⠀⠀⠀⠀⠀⠀⢠⡉⣥⢻⣽⣷⢿⣷⣯⣿⣿⣿⣿⣿⣿⠂⠄⠡⠒⠐⠈⠳⢐⡚⡡⢜⡭⢻⡴⣛⢶⣭⡞⣧⣟⣯⢿⣭⣟⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣟⡛⢿⠙⣇⣿⢫⡝⣭⣓⣮⠷⣳⢾⣱⢟⣯⣟⣯⣷⣻⣾⡿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⣻⣷⣟⡷⣯⣿⣿
⠀⠀⣀⣄⣠⠌⢦⡱⣯⣿⣻⣾⡿⣯⣿⣿⣿⣿⣿⣿⡏⠙⠀⠀⠀⡰⣃⡤⢋⣜⣍⣫⣜⣣⣷⣻⣟⣶⡿⣟⣾⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏⡉⠁⡫⢜⠣⢯⣜⣦⠳⣬⠷⣽⣚⣷⣞⣳⣾⣷⣿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢯⣿⣹⣿⣽⣯⣿
*/