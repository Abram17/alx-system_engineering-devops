#!/usr/bin/env ruby
# match phone number
puts ARGV[0].scan(/^[0-9]{10}$/).join
