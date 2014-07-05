Pod::Spec.new do |s|
  s.name     = 'RGLogger'
  s.version  = '1.0'
  s.license  = 'PUBLIC'
  s.summary  = 'Logger for iOS'
  s.homepage = 'https://bitbucket.org/gran33/rglogger-ios/src'
  s.author   = { 'Ran Greenberg' => 'https://github.com/gran33' }
  s.source   = { :git => 'https://github.com/gran33/RGLogger.git',
                 :tag => "#{s.version}" }

  s.description = 'Logger for iOS without overheads ;)'

  s.requires_arc   = true

  s.ios.deployment_target = '5.0'

  
  s.source_files = 'RGLogger/RGLogger.h'
  
end