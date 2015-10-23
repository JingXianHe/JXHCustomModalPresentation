<h3>JXHCustomModalPresentation</h3>
<p>
  Hello guys, my name is Tommy. I am a iOS developer and have great enthusiasm on coding. I like sharing my programming experience with others, so if you gus got any questions or problems on my projects please email me or go to blog and ask me questions. 
</p>
<p>
  JXHCustomModalPresentation is an awesome modal transition. It changes the default modal transition. You can see it from the image below. 
</p>
<img src="img/customTransition.gif" alt="cubic transition" />
<p>
  JXHCustomModalPresentation is very easy to use. For those geeks who use objective-c, you just download <b>JXHCustomModalPresent.a</b>, <b>JXHCustomModalPresent.h</b>, <b>JXHOptionsSandBox.h</b> and <b>Singleton.h</b>. Then you drag them into your project. Done! At the following steps I am going to show you how to use the JXHCustomModalPresentation.
</p>
<p>
    <ul>
      <li>#import "JXHCustomModalPresent.h"</li>
      <li>For example, assume you wanna present a UIViewController modally.
      <ul>
      <li>
        UIViewController *second = [[UIViewController alloc] init]
      </li>
      <li>
        second.modalPresentationStyle = UIModalPresentationCustom
      </li>
      <li>
        second.transitioningDelegate = [JXHCustomModalPresent sharedtransition]
      </li>
      <li>
        [self presentViewController:second animated:YES completion:nil]
      </li>
      </ul>
      </li>
    </ul>
</P>
<p>
    You will get amazing custom transition!
</p>
<p>
  If you wanna make some changes to the transition animation, please keep on watching.
</p>
<ul>
  <li>#import "JXHOptionsSandBox.h"</li>
  <li>[JXHOptionsSandBox setDamping:0.55f];//set animation damping</li>
  <li>[JXHOptionsSandBox setSpringVelocity:1.0f];//set spring velocity</li>
  <li>[JXHOptionsSandBox setAnimationDuration:1.2f]//set animation duration</li>
  <li>[JXHOptionsSandBox setNums:5]//set the numbers of cubic on the transition</li>
</ul>
