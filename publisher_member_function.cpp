#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp" //libreria funzioni di ROS
#include "std_msgs/msg/string.hpp" //libreria messaggi standard

using namespace std::chrono_literals;

/* This example creates a subclass of Node and uses std::bind() to register a
* member function as a callback from the timer. */

class MinimalPublisher : public rclcpp::Node //significa che la nostra classe eredita da Node contenuto nella libreria che abbiamo importato
{
  public:
    MinimalPublisher() //costruttore
    : Node("minimal_publisher"), count_(0) //do un nome al nodo e inizializzo count a 0, osserva che il costruttore si riferisce a super
    {
      publisher_ = this->create_publisher<std_msgs::msg::String>/*tipo del messaggio = String*/("topic"/*nome del topic*/, 10/*lascia stare per ora*/);
      timer_ = this->create_wall_timer(
      500ms, std::bind(&MinimalPublisher::timer_callback, this));
    }

  private:
    void timer_callback() //questa è la funzione vera e propria
    {
      auto message = std_msgs::msg::String();
      message.data = "Hello, world! " + std::to_string(count_++);
      RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
      publisher_->publish(message);
    }
    //dichiarione delle variabili che hai visto prima
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
    size_t count_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MinimalPublisher>());
  rclcpp::shutdown();
  return 0;
}