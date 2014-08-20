ans_num=rand(100)+1
usr_ans=nil
count=0
puts'1から100で数あてゲームです'
while usr_ans!=ans_num do 
    usr_ans=gets.to_i
    if usr_ans==ans_num
        puts " 正解です"
    elsif  usr_ans>ans_num
        puts "もっと小さいよ！"
    else usr_ans<ans_num 
        puts "もっと大きいよ！" 
    end
    count+=1
end
puts count.to_s+"回であたりました！！"
