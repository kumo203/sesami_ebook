= スマートロックとWebAPIを使ったプログラミング
== スマートロックとは
本書はスマートロックのSESAMEについて解説しますがそもそもスマートロックとはなんでしょうか？直訳するとお利口な鍵です。Googleで検索するとスマートフォンからの操作機能も持ったドアに設置する鍵がスマートロックとしてたくさん出てきます。本書の題材のSESAMEもそんなスマートロックの一つです。

== なぜSESAME？
Googleで検索頂くと分かると思いますがスマートロックたくさんあります。その中で著者がSESAMEを題材に選んだのはWebAPIの提供、お値段、そして人気からです。まずWebAPI提供が無いと著者が簡単に操作して遊べないので候補から外れます。そして遊びなのでお金を掛けすぎるのは嫌なのですがSESAME本体は大体1万5千円、そしてWebAPIに必要なオプションのWiFiアプセスポイントが大体5千円と比較的手を出しやすいお値段でした。さらに購入後に必要な費用は不要でしたが他のスマートロックではWebAPIを利用するためには月額費用などがかかるサービスが必要なケースが多かったです。それはある意味理解出来ることで扉の鍵という安全に関わる大事な品を管理するシステムをWebAPI提供というアクセス可能な状態でハッカーなどから守りつつ運営していくには管理費が必要なのだと思います。その発想からSESAMEのWebAPIはずっと提供して貰えるのかと心配になりますが販売が大変好調なようでよく売り切れてまして著者も数ヶ月待ってようやく旧モデルのSESAMEが買えたといったものでした。それだけ人気であればWebAPIサービス提供も急に止まることも無いでしょう、という発想でチョイスしています。

== SESAMEで何が出来る？
SESAMEは扉等に設置する鍵です。そしてそれをWebAPI経由で遠隔から開閉操作できることで様々な利用法が考えられます。例えばGoogleカレンダーと連動させて予定が入った時間会議室の扉を開くといった使い方が出来ます。なお、SESAMEのWebAPIのドキュメントはURL @<href>{https://docs.candyhouse.co/, https://docs.candyhouse.co/}にあります。

== SESAME本体とWiFiアクセスポイントの設定（スマホ利用）
それではまずSESAMEを設定する方法を見てみましょう。それにはまず専用のアプリをスマホにインストールしてサインアップなどをしてしてアプリ画面を出すところまでやってみましょう。その流れは下@<img>{0010}～@<img>{0130}になります。なお、画面は著者のスマホ環境の都合上英語の画面になっていますのでご注意下さい。
//image[0010][SESAMEソフトをスマホにインストール]{
//}
//image[0020][インストールしたソフトを起動]{
//}
//image[0030][ソフトにLocation（位置情報）権限が必要とのメッセージ]{
//}
//image[0040][権限付与の選択]{
//}
//image[0050][ログイン画面。最初なのでSign up～へ]{
//}
//image[0060][Sign Up（サインアップ）]{
//}
//image[0070][情報を入力]{
//}
//image[0080][メールアドレスを認証するとのメッセージ]{
//}
//image[0090][メールされたコードを入力して認証]{
//}
//image[0100][Location（位置情報）権限が必要とのメッセージで設定画面へ]{
//}
//image[0110][Location（位置情報）がOffなのでOnにする]{
//}
//image[0120][Location（位置情報）がアプリ提供者へ共有されることへの確認で同意]{
//}
//image[0130][Onになったので戻る]{
//}
//image[0140][アプリ画面が表示]{
//}

これでアプリが起動できるようになりましたがまだ肝心のSESAMEスマートロックの登録が出来ていません。それも続いてやっていきましょう。下@<img>{0145}～@<img>{0230}がその流れです。
//image[0145][＋ボタンをおしてSESAMEの登録]{
//}
//image[0150][SESAMEにつける名前入力]{
//}
//image[0160][近くにある未設定のSESAMEが見つかるので選択]{
//}
//image[0170][接続開始]{
//}
//image[0180][接続後の紐付け登録が自動で行われ]{
//}
//image[0190][登録完了]{
//}
//image[0200][ロック状態をSESAMEのつまみをひねってを設定]{
//}
//image[0210][アンロック状態をSESAMEのつまみをひねってを設定]{
//}
//image[0220][設定完了]{
//}
//image[0230][登録したSESAMEの状態が出ている]{
//}

これでアプリからSESAMEスマートロックの開閉操作は出来る様になりました。ですがこの本の目的はWebAPIからの利用ですのでそのために必要なWiFiアプセスポイントとクラウド設定が必要です。それらを続いてやっていきましょう。下@<img>{0240}～@<img>{0380}がWiFiアプセスポイント設定の流れです。
//image[0240][サイドパネルを開いて]{
//}
//image[0250][左にスクロールして＋ボタンを押す]{
//}
//image[0260][さらに＋ボタンを押してWiFiアプセスポイントを登録開始]{
//}
//image[0270][近くのWiFiアプセスポイントが見つかるので選択]{
//}
//image[0280][接続開始]{
//}
//image[0290][WiFiアプセスポイントにつける名前入力]{
//}
//image[0300][WiFiアプセスポイントを接続するWiFiネットワークを選択]{
//}
//image[0310][WiFiネットワークのパスワードを入力]{
//}
//image[0320][WiFi接続開始]{
//}
//image[0330][接続成功]{
//}
//image[0340][WiFiアプセスポイント下の＋ボタンを押して]{
//}
//image[0350][登録するSESAMEを選択]{
//}
//image[0360][登録開始]{
//}
//image[0370][登録完了]{
//}
//image[0380][設定完了]{
//}

これでインターネット経由で登録したSESAMEが操作できる様になりました。続いてSESAMEのクラウド設定をONにしてWebAPIアクセスが出来る様にしましょう。下@<img>{0390}～@<img>{0430}がその流れです。
//image[0390][登録したSESAMEの状態画面に戻ってStatusボタンを押す]{
//}
//image[0400][Changge Setting（設定を変更）を押して]{
//}
//image[0410][開いた設定画面を下スクロール]{
//}
//image[0420][Cloud（クラウド）がOffなので押して]{
//}
//image[0430][Onにする]{
//}

これでスマホでやらないといけない操作はお終いです。

== SESAME WebAPIの設定
続いてSESAMEのWebAPIからの利用に必要な設定を行いましょう。これはスマホからの設定に比べれば短い道のりです。SESAMEのダッシュボードをWebブラウザからURL @<href>{https://my.candyhouse.co/, https://my.candyhouse.co/}で開き操作していきます。下@<img>{0500}～@<img>{0580}がその流れです。
//image[0500][ダッシュボード画面が開くのでSign Upで入力したメールアドレスとパスワードを入力]{
//}
//image[0510][正しい入力の場合は接続される]{
//}
//image[0520][接続後の画面]{
//}
//image[0530][左上のCANDY HOUSE表記隣の三を押してメニューを表示しAPI Settingsを選択]{
//}
//image[0540][SEND CODEボタンを押してメールアドレスにコードを受信]{
//}
//image[0560][受信したコードを入力]{
//}
//image[0570][ADDボタンを押してAPI Key(トークン)を取得]{
//}
//image[0580][API Key(トークン)が表示されるのでコピーして控える]{
//}

== SESAME WebAPIを使おう
お疲れ様でした。これでSESAMEをWebAPIで利用することが出来る様になりました。早速利用してみましょう。下@<img>{0600}～@<img>{0610}が主に使われるWebAPIと思います。
//image[0600][登録されているSESAMEを取得するWebAPI]{
//}
//image[0610][SESAMEを操作するWebAPI]{
//}

これのコマンド例の部分を抽出すると下記の通りです。
//listnum[curl01][登録されているSESAMEを取得][bash]{
curl -H "Authorization: YOUR_AUTH_TOKEN" https://api.candyhouse.co/public/sesames
//}
//listnum[curl02][SESAMEを操作][bash]{
curl -H "Authorization: YOUR_AUTH_TOKEN" \
    -H "Content-Type: application/json" \
    -X POST -d '{"command":"lock"}' \
    https://api.candyhouse.co/public/sesame/00000000-0000-0000-0000-000000000001
//}

Mac/Linux環境ですとそのまま取得したトークンをYOUR_AUTH_TOKENの所に置き換えればターミナルから実行できます。ただWindows環境だとcurlコマンドがインストールされていない事が多いと思いますので同等のコマンドを最初からインストールされているPowerShellを使って実行するのが著者のお気に入りの方法です。PowerShellに書き替えたコマンド例は下記の通りです。
//listnum[PowerShell01][登録されているSESAMEを取得][PowerShell]{
$headers = @{"Authorization"="YOUR_AUTH_TOKEN" }
Invoke-RestMethod 'https://api.candyhouse.co/public/sesames' `
  -Method 'GET' -Headers $headers
//}
//listnum[PowerShell02][SESAMEを操作][PowerShell]{
$headers = @{"Authorization"="YOUR_AUTH_TOKEN";
             "content-type"="application/json" }
$command = @{command="lock"}
$Body = $command | ConvertTo-Json
Invoke-RestMethod 'https://api.candyhouse.co/public/sesame/00000000-0000-0000-0000-000000000001' `
  -Method 'POST' -Headers $headers -Body $Body
//}
SESAMEを操作するWebAPIのcommandに指定できるのは"lock", "unlock", "sync"の3種類です。"lock", "unlock"はそのままロックとアンロックの意味でsyncはSesameの最新状態の送信を要求するコマンドであまり使う事は無いと思います。
PowerShellで実際に実行した様子の画面が下@<img>{0700}～@<img>{0710}です。
//image[0700][登録されているSESAMEを取得するWebAPI PowerShell実行例]{
//}
//image[0710][SESAMEを操作するWebAPI PowerShell実行例]{
//}

== 終わりに
WebAPIが動く様になったので後はそれにアクセスするをWebページなどを作って利用していけます。ただ、上記の様にAPI Keyがべた書きでWebページ内にあるとそれを見てイタズラする人が出る可能性があるのでそのまま記載するのは避けた方が良いです。例えば私は@<href>{https://azure.microsoft.com/ja-jp/services/functions/, Azure Functions}を利用して隠したい部分は隠すなどしています。それについては近くFacebook等にコードをアップロードしたいと思いますのでよろしければご訪問下さい。
