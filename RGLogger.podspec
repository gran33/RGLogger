Pod::Spec.new do |s|
  s.name     = 'RGLogger'
  s.version  = '2.2'
  s.license  = { :type => 'MIT', :file => 'LICENCE'}
  
  s.summary  = 'Logger for iOS'
  s.description = 'Logger for iOS without overheads ;)'
  
  s.homepage = 'https://github.com/gran33/RGLogger'
  s.author   = { 'Ran Greenberg' => 'https://github.com/gran33' }
  s.source   = { :git => 'https://github.com/gran33/RGLogger.git',
                 :tag => s.version.to_s }

  s.requires_arc   = true
  s.ios.deployment_target = '5.0'
  s.source_files = 'RGLogger/RGLoggerHeader/RGLogger.h'
  
end