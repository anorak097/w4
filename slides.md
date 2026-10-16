---
theme: neversink
routerMode: hash
title: \#5 生活中的感測器
class: text-center
transition: slide-left
comark: true
slide_info: false
neversink_slug: 'AI 概論與實作體驗 #5 生活中的感測器'
---

<h1 style="font-size: 2.5rem; font-weight: bold;">AI 概論與實作體驗</h1>
<h1 style="font-size: 5rem; margin-top: 0px; font-weight: bold;">#5 生活中的感測器</h1>

---
transition: slide-left
layout: top-title
color: dark
---
::title::

<h1 style="font-size: 3rem; padding-top: 10px; padding-bottom: 10px; font-weight: bold;  display: flex; justify-content: space-between;">
   <span>感測器與函式庫</span><span style="font-size: 2rem; color: gray;">什麼是感測器</span>
</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 66%; padding-right: 20px; box-sizing: border-box;">
            <h2>如果把 <span style="background:#FFE45E; color:black;">MCU 當作大腦</span>，感測器 (Sensor) 就等同於<span style="background:#FFE45E; color:black;">受器</span>。<br>
            常見的感測器有：按鈕開關、RFID 讀取器、紅外線接收器、人體紅外線感測器、超音波感測器、聲音感測器等、三軸感測器、雙軸按鍵搖桿......<br>
            </h2>
        </div>
        <div style="width: 34%; display: flex; flex-direction: column; align-items: center; text-align: center; box-sizing: border-box;">
            <img src="https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEgPmlT7NIW40GepVavpKc4QvDSw_e9xV77P0us-r6tp2IOozgyjgxvzo7nGCpZJI-RWm6AK9zH4EnvpqOc0ViY1kN3V60lqbUeSpHfr03s4p2-ltZlFmHQp7YE7QbkdXko6hOR9XcmrWlRJ/s400/game_controller.png">
            搖桿是融合許多感測器的經典例子
        </div>
    </div>
</div>


---
transition: slide-left
layout: top-title
color: dark
---

::title::

<h1 style="font-size: 3rem; padding-top: 10px; padding-bottom: 10px; font-weight: bold;  display: flex; justify-content: space-between;">
   <span>感測器與函式庫</span><span style="font-size: 2rem; color: gray;">函式庫的重要性</span>
</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 66%; padding-right: 20px; box-sizing: border-box;">
            <h2>函式庫 (Library)，顧名思義就像是一座現成的程式圖書館。我們可以透過查閱裡面的工具書——也就是<span style="background:#FFE45E; color:black;">下載並引用別人寫好的現成模組</span>——來完成我們需要的功能，比起自己從頭手刻大部分程式，<span style="background:#FFE45E; color:black;">能省下大量的開發時間</span>。</h2><br><br>
            <div v-click="1"><h2 style="font-size: 2.5rem;">來看一個感測器的例子</h2></div>
		</div>
		<div style="width:30%; display: flex; flex-direction: column; align-items: center; text-align: left; box-sizing: border-box;">
			<img src="https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEjWAS4K-e2tnShDoR9-PKAa51Kv0Zb6SJgaKnFONC9fVvOeVvAyH1H1wk_8U2qjydG7d8EVUG3BT8bOpApGU8lOdi1jLjNfo4uHsJt2Y3wsnQb3MwNejHqlWv7I9fpRaSZrGJdQZUVTZ_aR/s800/book_gijutsusyo_programming.png">
            有沒有回憶起「中文房間」
    	</div>
	</div>
</div>

---
transition: slide-left
layout: top-title
color: dark
---

::title::

<h1 style="font-size: 3rem; padding-top: 10px; padding-bottom: 10px; font-weight: bold;  display: flex; justify-content: space-between;">
   <span>紅外線感測器</span><span style="font-size: 2rem; color: gray;">生活中常見的感測器</span>
</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 66%; padding-right: 20px; box-sizing: border-box;">
            <h2><span style="background:#FFE45E; color:black;">紅外線 (Infrared, IR) 是一種不見光/波</span>，波長相對光譜上的紫光離紅光較近。它除了可以用在日常的<span style="background:#FFE45E; color:black;">中短距離通訊</span> (電視、冷氣遙控器) 之外，也能用來<span style="background:#FFE45E; color:black;">感應</span>人體或周遭會發熱的物體所散發出來的<span style="background:#FFE45E; color:black;">熱輻射</span>。</h2><br><br>
            <div v-click="1"><h2 style="font-size: 2rem;">有沒有想過 1 與 0 的電子世界，如何表示遙控器的數字、符號或功能?
            </h2></div>
		</div>
		<div style="width:34%; display: flex; flex-direction: column; align-items: center; text-align: center; box-sizing: border-box;">
			<img src="https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEiLFoBaI36w0GQrCtpdx_3Lg9Iba5E_ULE9K39x-LeZglwWXENHETh4VXAbtbDVUl3sQQ38T6nqx3I-TJOr03EEVK1t_Hv9buTzeCyvYnivYcoedkCScNkTA8xQLU9ERgyBgzQjhDMJwvhJ/s800/remotecontroler_rimokon.png">
            許多有「小燈泡」的遙控器都是<br>紅外線遙控器
    	</div>
	</div>
</div>

---
transition: slide-left
layout: top-title
color: dark
---

::title::

<h1 style="font-size: 3rem; padding-top: 10px; padding-bottom: 10px; font-weight: bold;  display: flex; justify-content: space-between;">
   <span>紅外線感測器但沒有函式庫</span><span style="font-size: 2rem; color: gray;">函式庫的重要性</span>
</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 66%; padding-right: 20px; box-sizing: border-box;">
            <h2><span style="background:#FFE45E; color:black;"></span>剛剛的例子，發現了什麼?<br><div v-click="1"><h2 style="font-size: 2rem;">沒有按按鈕但有感測到東西
            </h2></div>
            <span v-click="2" style="background:#FFE45E; color:black;">有其他一直都在的紅外光</span>
            <div v-click="3"><h2 style="font-size: 2rem;">如何分辨出按鈕的訊號
            </h2></div>
            <div v-click="4">
            <span style="background:#FFE45E; color:black;">按鈕訊號有一定的格式</span><br>函式庫能找出該格式並分割出來 (從固定的開頭讀到一定長度)</div></h2>
		</div>
		<div v-click="4" style="width:34%; display: flex; flex-direction: column; align-items: center; text-align: center; box-sizing: border-box;">
			<img src="https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEiLFoBaI36w0GQrCtpdx_3Lg9Iba5E_ULE9K39x-LeZglwWXENHETh4VXAbtbDVUl3sQQ38T6nqx3I-TJOr03EEVK1t_Hv9buTzeCyvYnivYcoedkCScNkTA8xQLU9ERgyBgzQjhDMJwvhJ/s800/remotecontroler_rimokon.png">
            遙控器訊號有普遍的編碼規格
    	</div>
	</div>
</div>

---
transition: slide-left
layout: top-title
color: dark
---

::title::

<h1 style="font-size: 3rem; padding-top: 10px; padding-bottom: 10px; font-weight: bold;  display: flex; justify-content: space-between;">
   <span>進位制</span><span style="font-size: 2rem; color: gray;">額外知識補充</span>
</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 66%; padding-right: 20px; box-sizing: border-box;">
            <h2>現在常用的十進位制  (Decimal) 每一「位」是由 <span style="background:#FFE45E; color:black;">0 ~ 9 十個數字</span>組成，超過 9 則會進「位」；也就是說，在只有高低電位、<span style="background:#FFE45E; color:black;">僅存在 0 與 1 的電子世界</span>中，用的是<span style="background:#FFE45E; color:black;">二進制 (Binary)</span>，但由於二進制閱讀較為不易，程式設計更常使用<span style="background:#FFE45E; color:black;">八進制 (Octal)</span> 與<span style="background:#FFE45E; color:black;">十六進制 (Hexadecimal)</span>。</h2><br><br>
<div v-click="1" style="max-width: 100%; overflow-x: auto;">

$$11111101010_2 = 1 \times 2^{10} + 1 \times 2^9 + 1 \times 2^8 + 1 \times 2^7 + 1 \times 2^6 + 1 \times 2^5 + 0 \times 2^4 + 1 \times 2^3 + 0 \times 2^2 + 1 \times 2^1 + 0 \times 2^0 = 2026_{10}$$

</div>
		</div>
		<div style="width:34%; display: flex; flex-direction: column; align-items: center; text-align: center; box-sizing: border-box;">
			<h2>MMXXVI<br>羅馬數字<br>11111101010<br>二進制<br>3752<br>八進制<br>2026<br>十進制<br>7EA<br>十六進制</h2>
    	</div>
	</div>
</div>

---
transition: slide-left
layout: top-title
color: dark
---

::title::

<h1 style="font-size: 3rem; padding-top: 10px; padding-bottom: 10px; font-weight: bold;  display: flex; justify-content: space-between;">
   <span>RFID 讀取器</span><span style="font-size: 2rem; color: gray;">生活中常見的感測器</span>
</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 66%; padding-right: 20px; box-sizing: border-box;">
            <h2>RFID 讀取器是透過發射<span style="background:#FFE45E; color:black;">無線電波</span>，激活要讀取的(無源)標籤並<span style="background:#FFE45E; color:black;">接收標籤回傳的資料</span>，標籤內的<span style="background:#FFE45E; color:black;">資料則通常以一個微小的晶片儲存</span>。<br>
            RFID 掃描距離視不同的讀取器與標籤組合而定，被動式標籤最長距離可到十公尺左右 (超高頻 RFID)。<br>
            RFID 常見的用法是<span style="background:#FFE45E; color:black;">利用標籤的不同 ID 區分</span>不同人、車，如悠遊卡與 e-tag。<br>
            也能用來<span style="background:#FFE45E; color:black;">判斷是否有目標經過/靠近</span>，如防盜門。</h2>
        </div>
        <div style="width: 34%; display: flex; flex-direction: column; align-items: center; text-align: center; box-sizing: border-box;">
            <img src="https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEiLtIfis2XO3IW6ulFAM_N9vLiWIVN825Du-0G79AzoTmxbEc9f-4chonJjjyYM6PnZjpfAqtVEJ8fMgrBj62rf8TGxJTpJue4mFCnz2IjNyG78c9LDI5ICudBPVfAZKbXaK0bN9qEwhqD7/s400/rfid_card_reader_touch.png">
        </div>
    </div>
</div>