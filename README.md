<h3>JXHCustomModalPresentation</h3>
<p>
  Hello guys, my name is Tommy. I am a iOS developer and have great enthusiasm on coding. I like sharing my programming experience with others, so if you gus got any questions or problems on my projects please email me or go to blog and ask me questions. 
</p>
<p>
  JXHCustomModalPresentation is an awesome modal transition. It changes the default modal transition. You can see it from the image below. 
</p>
<img src="img/customTransition.gif" alt="cubic transition" />
<p>
  JXHCustomModalPresentation is very easy to use. For those geeks who use objective-c, you just download JXHCustomModalPresent.a, JXHCustomModalPresent.h, JXHOptionsSandBox.h and Singleton.h. Then you drag them into your project. Done! At the following steps I am going to show you how to use the JXHCustomModalPresentation.
</p>
<p>
    1.    #import "JXHCustomModalPresent.h"
    
    2.    UIViewController *second = [[UIViewController alloc] init];
          second.modalPresentationStyle = UIModalPresentationCustom;
          second.transitioningDelegate = [JXHCustomModalPresent sharedtransition];
          [self presentViewController:second animated:YES completion:nil];
</P>
<p>
    You will get amazing custom transition!
</p>
