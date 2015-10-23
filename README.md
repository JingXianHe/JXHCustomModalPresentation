<h3>JXHCustomModalPresentation</h3>
<p>
  Hello guys, my name is Tommy. I am a iOS developer and have great enthusiasm on coding. I like sharing my programming experience with others, so if you gus got any questions or problems on my projects please email me or go to blog and ask me questions. 
</p>
<p>
  JXHCustomModalPresentation is an awesome modal transition. It changes the default modal transition. You can see it from the image below. 
</p>
<img src="img/customTransition.gif" alt="cubic transition" />
<p>
  JXHCustomModalPresentation is very easy to use. For those geeks who use objective-c, you just download <mark>JXHCustomModalPresent.a</mark>, JXHCustomModalPresent.h, JXHOptionsSandBox.h and Singleton.h. Then you drag them into your project. Done! At the following steps I am going to show you how to use the JXHCustomModalPresentation.
</p>
<p>
    <p>1.   #import "JXHCustomModalPresent.h"</p>
    <p>2.   For example, if you wanna present a UIViewController modally, you can follow the below steps.</p>
    <p>UIViewController *second = [[UIViewController alloc] init];</p>
    <p>second.modalPresentationStyle = UIModalPresentationCustom; </p>
    <p>second.transitioningDelegate = [JXHCustomModalPresent sharedtransition];</p>
    <p>[self presentViewController:second animated:YES completion:nil];</p>
</P>
<p>
    You will get amazing custom transition!
</p>
<p>
  If you wanna 
</p>
